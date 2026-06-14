class Solution {
public:
    int getLength(vector<int>& nums) {
        int n = nums.size(), ans = 1;
        for(int left = 0; left < n; left++){
            unordered_map<int, int> freq;
            unordered_map<int, int> fof;
            int maxF = 0, distinct = 0;
            for(int right = left; right < n; right++){
                int v = nums[right];
                int of = freq[v];
                if(of > 0)  { if (--fof[of] == 0) fof.erase(of); }
                else         { distinct++; }

                int nf = ++freq[v];
                fof[nf]++;
                if (nf > maxF) maxF = nf;

                int sz = right - left + 1;

                if (distinct == 1) { ans = max(ans, sz); continue; }

                if ((int)fof.size() == 2) {
                    auto it = fof.begin();
                    int fa = it->first; ++it;
                    int fb = it->first;
                    int lo = min(fa,fb), hi = max(fa,fb);
                    if (hi == 2 * lo) ans = max(ans, sz);
                }
            }
        }
        return ans;
    }
};