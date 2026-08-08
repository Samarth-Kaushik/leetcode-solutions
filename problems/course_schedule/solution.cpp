class Solution {
public:
    bool isCyclic(vector<vector<int>>& adjList, vector<bool>& visited, vector<bool>& recStack,
    int node){
        if(recStack[node]) return true;
        if(visited[node]) return false;
        visited[node] = true;
        recStack[node] = true;
        for(auto nodes : adjList[node]){
            if(isCyclic(adjList, visited, recStack, nodes))
            return true;
        }
        recStack[node] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adjList(numCourses);
        for(int i = 0; i < prerequisites.size(); i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adjList[u].push_back(v);
        }
        vector<bool> visited(numCourses, false);
        vector<bool> recStack(numCourses, false);
        for(int i = 0; i < numCourses; i++){
            if(!visited[i]){
                if(isCyclic(adjList, visited, recStack, i)){
                    return false;
                }
            }
        }
        return true;
    }
};