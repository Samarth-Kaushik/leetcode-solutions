class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi = nums[0];
        int n = nums.size();
        vector<int> prefixGcd(n);
        for(int i = 0; i < n; i++){
            maxi = max(maxi, nums[i]);
            prefixGcd[i] = __gcd(nums[i], maxi); 
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long sum = 0;
        for(int i = 0.; i < n/2; i++){
            sum += __gcd(prefixGcd[i], prefixGcd[n-1-i]);
        }
        return sum;
    }
};