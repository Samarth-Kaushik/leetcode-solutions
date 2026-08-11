class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int diff = 0;
        int n = heights.size();
        int m = heights[0].size();
        priority_queue<pair<int, pair<int , int>>,
        vector<pair<int, pair<int , int>>>,
        greater<pair<int, pair<int , int>>>> pq;
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;
        //{dist,{row, col}}
        pq.push({0, {0, 0}});
        vector<int> dx = {-1, 1, 0, 0};
        vector<int> dy = {0, 0, 1, -1};
        while(!pq.empty()){
            int diff = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();
            if(row == n-1 && col == m-1) return diff;
            for(int i = 0; i < 4; i++){
                int newR = row + dx[i];
                int newC = col + dy[i];
                if(newR >= 0 && newR < n && newC >= 0 && newC < m){
                    int newEffort = max(diff, abs(heights[row][col] - heights[newR][newC]));
                    if(newEffort < dist[newR][newC]){
                        dist[newR][newC] = newEffort;
                        pq.push({newEffort, {newR, newC}});
                    }
                }
            }
        }
        return -1;

    }
};