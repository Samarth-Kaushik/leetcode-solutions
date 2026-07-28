class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> v(26, 0);
        for(char c : s) v[c-'a']++;
        int n = s.size();
        string half = "";
        for(int j = 0; j < 26; j++){
            while(v[j] >= 2){
                half.push_back('a' + j);
                v[j] -= 2;
            }
        }
        char middle;
        if((n&1)){
            for(int i = 0; i < 26; i++){
                if(v[i] == 1) middle = 'a' + i;
            }
        }
        string second = half;
        reverse(second.rbegin(), second.rend());
        if(n&1) return (half + middle + second);
        return (half + second);
    }
};