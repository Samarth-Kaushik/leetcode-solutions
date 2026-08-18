class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 1) {
            unordered_map<int, int> cnt;
            for (int num : nums)
                cnt[num]++;
            int ans = -1;
            for (auto [num, freq] : cnt) {
                if (freq == 1)
                    ans = max(ans, num);
            }
            return ans;
        }
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }
        int first = nums[0];
        int last = nums[n - 1];
        int firstCnt = 0;
        int lastCnt = 0;
        for (int num : nums) {
            if (num == first)
                firstCnt++;
            if (num == last)
                lastCnt++;
        }

        int ans = -1;

        if (firstCnt == 1)
            ans = max(ans, first);
        if (lastCnt == 1)
            ans = max(ans, last);

        return ans;
    }
};