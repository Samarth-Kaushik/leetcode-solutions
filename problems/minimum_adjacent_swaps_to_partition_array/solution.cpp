class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long sw = 0;
        long long cnt1 = 0, cnt2 = 0;
        int mod = 1e9+7;

        for(int x : nums){
            if(x < a){
                sw = (sw + cnt1 + cnt2)% mod;
                
            }else if(x >= a && x <= b){
                sw = (sw + cnt2) % mod;   
                cnt1++;
            }else{
                cnt2++;
                }
        }
        return sw;
    }
};