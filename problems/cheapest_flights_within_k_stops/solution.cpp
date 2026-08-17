class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<pair<int, int>> adjList[n];
        for(int i = 0; i < flights.size(); i++) {
            
            adjList[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        //{stops, {node, cost}}
        queue<pair<int, pair<int, int>>> q;
        q.push({0, {src, 0}});
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();   
            int stops = it.first;
            int node = it.second.first;
            int cost = it.second.second;
            if(stops > k) continue;
            for(auto iter : adjList[node]){
                int adjNode = iter.first;
                int edgeW = iter.second;
                if(cost + edgeW < dist[adjNode] && stops <= k){
                    dist[adjNode] = cost + edgeW;
                    q.push({stops + 1, {adjNode, cost + edgeW}});
                }
            }
        }
        if(dist[dst] == INT_MAX) return -1;
        return dist[dst];
    }
};