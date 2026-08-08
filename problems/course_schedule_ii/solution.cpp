class Solution {
public:
    bool isPoss(vector<vector<int>>& adjList, vector<int>& indegree, int nodes,
    vector<int>& ans){
        queue<int> q;
        int visited = 0;
        for(int i = 0; i < nodes; i++){
            if(indegree[i] == 0) q.push(i);
        }
        while(!q.empty()){
            int node = q.front();
            visited++;
            q.pop();
            ans.push_back(node);
            for(int temp : adjList[node]){
                indegree[temp]--;
                if(indegree[temp] == 0) q.push(temp);
            }
        }

        return nodes == visited;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
        vector<vector<int>> adjList(numCourses);
        vector<int> indegree(numCourses, 0);
        for(int i = 0; i < prerequisites.size(); i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adjList[v].push_back(u);
            indegree[u]++;
        }
        if(!isPoss(adjList, indegree, numCourses, ans)){
            return {};
        }
        return ans;
    }
};