class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, vector<int>>> pq;
        int n = points.size();
        for(int i = 0; i < n; i++){
            int dis = 0;
            for(int j = 0; j < 2; j++){
                dis += (points[i][j])*(points[i][j]);
            }
            if(pq.size() < k){
                pq.push({dis, {points[i][0], points[i][1]}});
            }
            else{
                if(pq.top().first > dis){
                    pq.pop();
                    pq.push({dis, {points[i][0], points[i][1]}});
                }
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};