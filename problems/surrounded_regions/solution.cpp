class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.empty()) return;
        queue<pair<int, int>> q;
        int m = board.size(), n = board[0].size();
        for(int i = 0; i < m; i++){
            if(board[i][0] == 'O') q.push({i, 0});
            if(board[i][n-1] == 'O') q.push({i, n-1});
        }
        for(int j = 0; j < n; j++){
            if(board[0][j] == 'O') q.push({0, j});
            if(board[m-1][j] == 'O') q.push({m-1, j});
        }
        vector<pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while(!q.empty()){
            pair<int, int> element = q.front();
            q.pop();
            int row = element.first, col = element.second;
            if(board[row][col] != 'O') continue; 
            // Safe mark ho gya
            board[row][col] = 'S'; 
            
            for(auto it : dirs){
                int r = row + it.first;
                int c = col + it.second;
                if(r >= 0 && r < m && c >= 0 && c < n){ 
                    if(board[r][c] == 'O'){
                        q.push({r, c});
                    }
                }
            }
        }
        
        for(int i = 0; i < m; i++){
            for(int j = 0;  j < n; j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
                else if(board[i][j] == 'S') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};