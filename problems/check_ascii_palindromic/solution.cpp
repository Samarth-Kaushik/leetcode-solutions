    class Solution {
    public:
        bool isPalindromic(string s) {
           string t;
            bool isPoss = true;
            for(char c : s){
                int x = (int)c;
                for(int i = 7; i >= 0; i--){
                    t += (((x >> i)&1)? '1' : '0');
                }
            }
            for(int i = 0; i < t.size()/2; i++){
                if(t[i] != t[t.size()-1-i]) return false;
            }
            return true;
        }
    };