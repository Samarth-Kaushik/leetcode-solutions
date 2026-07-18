class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string ans = "";
        int yCnt = 0;
        int xCnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == y) yCnt++;
            else if(s[i] == x) xCnt++;
            else ans += s[i];
        }
        for(int i = 0; i < yCnt; i++) ans += y;
        for(int i = 0; i < xCnt; i++) ans += x;

        return ans;
    }
};