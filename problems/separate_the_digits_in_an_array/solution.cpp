class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int num : nums){
            if(num == 0){
                ans.push_back(0);
                continue;
            }
            int digit = 0;
            int temp = num;
            while(temp != 0){
                digit++;
                temp /= 10;
            }
            int divisor = 1;
            for(int i = 1; i < digit; i++){
                divisor *= 10;
            }

            while(divisor > 0){
                ans.push_back(num / divisor);
                num %= divisor;
                divisor /= 10;
            }
        }
        return ans;
    }
};