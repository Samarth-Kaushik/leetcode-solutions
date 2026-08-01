class Solution {
public:
    int maximumWidth(vector<int>& planks) {
        unordered_map<long long, int> cnt;
        for(int n: planks) cnt[n]++;
        vector<long long> vals;
        for(auto &p : cnt) vals.push_back(p.first);
        sort(vals.begin(), vals.end());

        int m = vals.size();

        unordered_map<long long, int> count;
        for(long long n: vals){
            int c = cnt[n]/2;
            if(c > 0) count[2*n] += c;
        }
        for(int i = 0; i < m; i++){
            for(int j = i+1; j < m; j++){
                long long h = vals[i] + vals[j];
                int c = min(cnt[vals[i]], cnt[vals[j]]);
                if(c > 0) count[h] += c;
            }
        }
        int best = 0;

        for(auto& p : cnt){
            long long h = p.first;
            int total = p.second;
            auto it = count.find(h);
            if(it != count.end()) total += it->second;
            best = max(best, total);
        }

        for(auto& p : count){
            long long h = p.first;
            int total = p.second;
            auto it = cnt.find(h);
            if(it != cnt.end()) total += it->second;
            best = max(best, total);
        }
        return best;
    }
};