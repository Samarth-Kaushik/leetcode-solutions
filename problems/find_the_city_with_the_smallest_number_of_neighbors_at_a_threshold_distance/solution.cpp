class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> adjMat(n, vector<int>(n, INT_MAX));
        for(int i = 0; i < edges.size(); i++){
            adjMat[edges[i][0]][edges[i][1]] = edges[i][2];
            adjMat[edges[i][1]][edges[i][0]] = edges[i][2];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    adjMat[i][j] = 0;
                }
            }
        }
        vector<int> v(n, 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    if(adjMat[j][i] != INT_MAX && adjMat[i][k] != INT_MAX){
                        adjMat[j][k] = min(adjMat[j][k], adjMat[j][i] + adjMat[i][k]);
                    }
                }
            }
        }
        int ans = -1;
        // int nodes = INT_MAX;
        int minNodes = INT_MAX;
        for(int i = 0; i < n; i++){
            int nodes = 0;
            for(int j = 0; j < n; j++){
                if(i != j){
                    if(adjMat[i][j] != INT_MAX && adjMat[i][j] <= distanceThreshold){
                        nodes++;
                    }
                }
            }
             if(nodes <= minNodes){
                        minNodes = nodes;
                        ans = i;
                }
        }
        return ans;
    }
};