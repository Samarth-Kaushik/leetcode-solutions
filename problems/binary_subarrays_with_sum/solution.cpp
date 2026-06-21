class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefixSumCnt;
        prefixSumCnt[0] = 1;
        int currentSum = 0;
        int cnt = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            currentSum += nums[i];
            int req = currentSum - goal;

            if(prefixSumCnt.find(req) != prefixSumCnt.end()){
                cnt += prefixSumCnt[req];
            }
            prefixSumCnt[currentSum]++;
        }
        return cnt;
    }
};