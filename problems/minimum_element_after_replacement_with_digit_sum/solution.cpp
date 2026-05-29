class Solution {
public:
    int minElement(vector<int>& nums) {
        int minSum = INT_MAX;
        int sum = 0;
        int digit = 0;
        for(int num : nums){
            sum = 0;
            while(num != 0){
                digit = num % 10;
                sum += digit;
                num /= 10;
            }
            minSum = min(sum, minSum);
        }
        return minSum;
    }
};