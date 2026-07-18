class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = min_element(nums.begin(), nums.end()) - nums.begin();
        int max = max_element(nums.begin(), nums.end()) - nums.begin();
        return __gcd(nums[min], nums[max]);
    }
};