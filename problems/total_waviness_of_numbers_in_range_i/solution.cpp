class Solution {
private:
    int getWaviness(int x){
        string s = to_string(x);
        if(s.size() <= 2) return 0;
        int ans = 0;
        for(int i = 1; i < s.size() - 1; i++){
            bool isPeak = ((s[i] > s[i + 1]) && (s[i] > s[i -1]));
            bool isValley = ((s[i] < s[i + 1]) && (s[i] < s[i - 1]));
            if(isPeak || isValley) ans++;
        }
        return ans;
    }
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1; i <= num2; i++){
            ans += getWaviness(i);
        }
        return ans;
    }
};