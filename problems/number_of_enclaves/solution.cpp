class Solution {
private :
    void dfs(vector<vector<int>>& grid, vector<vector<int>>& visited,
    int row, int col){
        int m = grid.size(), n = grid[0].size();
        vector<pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        for(auto it : dirs){
            int x = row + it.first, y = col + it.second;
            if(x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == 1 && visited[x][y] == 0){
                visited[x][y] = 1;
                dfs(grid, visited, x, y);
            }
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, 0));
        
        int oneCnt = 0, reached = 0;
        for(int i = 0; i < m; i++){
            if(grid[i][0] == 1){
                visited[i][0] = 1;
                 dfs(grid, visited, i, 0);
            }
            if(grid[i][n-1]){
                visited[i][n-1] = 1;
                 dfs(grid, visited, i, n-1);
            }
        }
        for(int j = 0; j < n; j++){
            if(grid[0][j] == 1){
                visited[0][j] = 1;
                dfs(grid, visited, 0, j);

            }
            if(grid[m-1][j]){
                visited[m-1][j] = 1;
                dfs(grid, visited, m-1, j);
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1) oneCnt++;
                if(visited[i][j] == 1) reached++;
            }
        }
        return oneCnt-reached;
    }
};