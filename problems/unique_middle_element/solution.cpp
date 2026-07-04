class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int ele = nums[n/2];
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == ele) cnt++;
        }
        if(cnt > 1) return false;
        return true;
    }
};