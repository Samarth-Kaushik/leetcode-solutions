class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        if(mat.size() == 0 || mat[0].size() == 0) return {};
        int m = mat.size(), n = mat[0].size();
        queue<pair<int, int>> q;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0) q.push({i, j});
                else mat[i][j] = INT_MAX;
            }
        }
        vector<pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while(!q.empty()){
            auto [row, col] = q.front();
            q.pop();
            for(auto[r1, c1] : dirs){
                int r = row + r1, c = col + c1;
                if(r >= 0 && r < m && c >= 0 && c < n && mat[r][c] && mat[r][c] > mat[row][col]){
                    q.push({r, c});
                    mat[r][c] = mat[row][col] + 1;
                }
            }
        }
        return mat;

    }
};