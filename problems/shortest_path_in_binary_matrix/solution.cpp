class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0] != 0 || grid[n-1][n-1] != 0) return -1;
        if(grid[0][0] == 0 && n == 1) return 1;

        queue<pair<pair<int, int>,int>> q;
        q.push({{0, 0}, 1});
        grid[0][0] = 1;
        vector<int> dx = {-1, 0, 1, 1, 1, 0, -1, -1};
        vector<int> dy = {1, 1, 1, 0, -1, -1, -1, 0};
        
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int ans = q.front().second;
            q.pop();
            for(int i = 0; i < 8; i++){
                int row = r+dx[i], col = c + dy[i];
                if(row == n-1 && col == n-1) return ans+1;
                if(row >= 0 && row < n && col >= 0 && col < n && grid[row][col] == 0){
                    q.push({{row, col}, ans+1});
                    grid[row][col] = 1;
                }
            }
        }
        return -1;
    }
};