class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<int> ans;
        vector<bool> visited(k, false);
        int cnt = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            if(nums[i] <= k && !(visited[nums[i] - 1])){
                ans.push_back(nums[i]);
                visited[nums[i] - 1] = true;
            }
            cnt++;
            if(ans.size() == k) break;
        }

        return cnt;
    }
};