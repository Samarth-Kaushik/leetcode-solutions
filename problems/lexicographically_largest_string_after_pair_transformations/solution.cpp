class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans;
        for(int x : nums){
            string s;
            int power = 0;
            int k = 0;
            while(x > 0){
                if(k >= 25){
                    s += 'z';
                    // k++;
                }
                else if(x % 2 == 1){
                    s += char('a' + power);
                }
                x /= 2;
                power++;
                k++;
                // power = min(power, 25);
            }
            reverse(s.begin(), s.end());
            ans.push_back(s);
        }
        return ans;
    }
};