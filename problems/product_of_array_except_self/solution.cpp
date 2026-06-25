class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zeroCnt = 0;
        int pdt = 1;
        int pdt1 = 1;
        for(int i = 0; i < n; i++){
            pdt *= nums[i];
            if(nums[i] == 0){
                zeroCnt++;
                continue;
            }
            pdt1 *= nums[i];
        }

        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                if(zeroCnt > 1){
                    ans[i] = 0;
                    continue;
                }
                ans[i] = pdt1;
            }else {
                ans[i] = pdt/nums[i];
            }
        }
        return ans;
    }
};