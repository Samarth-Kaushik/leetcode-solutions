class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       int stColor = image[sr][sc];
       if(stColor == color) return image;
       int m = image.size();
       int n = image[0].size();
       vector<vector<int>> ans = image;
       ans[sr][sc] = color;
       queue<pair<int, int>> q;
       q.push({sr, sc});
       vector<pair<int, int>> dirs = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
       while(!q.empty()){
            pair<int, int> temp = q.front();
            q.pop();
            for(auto it: dirs){
                int r = temp.first + it.first;
                int c = temp.second + it.second;
                if(r >= 0 && r < m && c >= 0 && c < n && ans[r][c] == stColor){
                    q.push({r, c});
                    ans[r][c] = color;
                }
            }
       }
       return ans;
    }
};