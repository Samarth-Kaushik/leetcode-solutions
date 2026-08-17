class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adjList(n + 1);
        int m = times.size();
        for(int i = 0; i < m; i++){
            adjList[times[i][0]].push_back({times[i][1], times[i][2]});
        }
        vector<int> dist(n+1, INT_MAX);
        // {time , node};
        priority_queue<pair<int, int>> pq;
        pq.push({0, k});
        dist[k] = 0;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int time = it.first;
            int node = it.second;
            for(auto iter : adjList[node]){
                int next = iter.first;
                int edgeW = iter.second;
                if(time + edgeW < dist[next]){
                    dist[next] = time + edgeW;
                    pq.push({time+edgeW, next});
                }
            }
        }
        int maxi = -1;
        for(int i = 1; i < n + 1; i++){
            if(dist[i] == INT_MAX) return -1;
            maxi = max(maxi, dist[i]);
        }
        return maxi;
    }
};