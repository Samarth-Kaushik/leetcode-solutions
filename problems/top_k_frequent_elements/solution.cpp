class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for(const auto&[val, freq] : mpp){
            v.push_back({freq, val});
        }
        sort(v.rbegin(), v.rend());
        vector<int> ans(k);
        for(int i = 0; i < k; i++){
            ans[i] = v[i].second;
        }
        return ans;
    }
};