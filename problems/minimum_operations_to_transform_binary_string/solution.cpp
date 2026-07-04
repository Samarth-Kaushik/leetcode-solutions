class Solution {
public:
    int minOperations(string s1, string s2) {
        int n = s1.size();
        if(n == 1){
            if(s1[0] == '1' && s2[0] == '0') return -1;
        }
        int ans = 0;
        int ones = 0;
        for(int i = 0; i < n; i++){
            if(s1[i] == '1' && s2[i] == '0'){
                ones++;
            }else{
                if(ones > 0){
                    ans += (ones/2) + (ones%2) * 2;
                    ones = 0;
                }
                if(s1[i] == '0' && s2[i] == '1') ans++;
            }
        }
        if(ones > 0) ans += (ones/2) + (ones%2) * 2;
        return ans;
    }
};