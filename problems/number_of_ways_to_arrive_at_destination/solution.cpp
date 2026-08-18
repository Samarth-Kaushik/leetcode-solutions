class Solution {
public:
    const long long MOD = 1e9 + 7;
    int countPaths(long long n, vector<vector<int>>& roads) {
        vector<vector<pair<long long, long long>>> adjList(n);
        long long m = roads.size();
        for(long long i = 0; i < m; i++){
            adjList[roads[i][0]].push_back({roads[i][1], roads[i][2]});
            adjList[roads[i][1]].push_back({roads[i][0], roads[i][2]});
        }
        vector<long long> dist(n, LLONG_MAX);
        vector<int> ways(n, 0);
        //{dist, node}
        priority_queue<pair<long long, long long>,
                        vector<pair<long long, long long>>,
                        greater<pair<long long, long long>>> pq;
        
        pq.push({0, 0});
        dist[0] = 0;
        ways[0] = 1;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            long long dis = it.first;
            long long node = it.second;
            if (dis > dist[node]) continue;
            for(auto iter : adjList[node]){
                long long next = iter.first;
                long long edgeW = iter.second;
                if(dis + edgeW < dist[next]){
                    dist[next] = dis+edgeW;
                    ways[next] = (ways[node])%MOD;
                    pq.push({dist[next], next});
                }
                else if(dis + edgeW == dist[next]){
                    ways[next] = ((ways[next])%MOD + (ways[node])%MOD)%MOD;
                }
            }
        }
        return ways[n-1]%MOD;
    }
};