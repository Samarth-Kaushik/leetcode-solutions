class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int maxSum = nums[0];
        int maxi = nums[0] + nums[k];
        for(int j = k; j < n; j++){
            maxSum = max(maxSum, nums[j-k]);
            maxi = max(maxi, nums[j] + maxSum);
        }
        return maxi;
    }
};