class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int , vector<int>> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]].push_back(i);
        }
        int cnt = 0;
        for(auto it : mpp){
            vector<int> ind = it.second;
            sort(ind.begin(), ind.end());
            bool block = true;
            for(int i = 0; i < ind.size(); i++){
                if(i > 0){
                    if(ind[i] - ind[i-1] != 1){
                        block = false;
                        // cnt+/+;
                        break;
                    }
                }
                if(!block) break;
            }
            if(block) cnt++;
        }
        return cnt;
    }
};