class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> reverseGraph(n);
        vector<int> inDegree(n, 0);
        for(int i = 0; i < graph.size(); i++){
            for(int v : graph[i]){
                reverseGraph[v].push_back(i);
                inDegree[i]++;
            }
        }
        queue<int> q;
        for(int i = 0; i < n; i++){
            if(inDegree[i] == 0) q.push(i);
        }
        vector<int> ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int temp : reverseGraph[node]){
                inDegree[temp]--;
                if(inDegree[temp] == 0) q.push(temp);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};