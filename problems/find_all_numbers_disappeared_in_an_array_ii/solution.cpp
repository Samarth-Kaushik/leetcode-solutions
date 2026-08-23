    class Solution {
    public:
        vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
            vector<vector<int>> ans;
            // vector<int> v;
            int n = nums.size();
            unordered_set<int> s;
            for(int x : nums){
                if(x >= lower && x <= upper) {
                    s.insert(x);
                }
            }
            long long st = -1;
            for(long long x = lower ; x <= (long long)upper; x++){
                if(!s.count((int)x)){
                    if(st == -1){
                        st = x;
                    }
                }
                else{
                    if(st != -1){
                        ans.push_back({(int)st, (int)(x-1)});
                        st = -1;
                    }
                }
            }
            if(st != -1){
                ans.push_back({(int)st, upper});
            }
            return ans;
        }
    };