class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans = "";
        ans.reserve(num.size());
        for(char c: num){
            while(ans.length() > 0 && k > 0 && ans.back() > c){
                ans.pop_back();
                k--;
            }
            if(ans.length() > 0 || c != '0') ans.push_back(c);
        }
        if(ans.empty()) return "0";
        while(!ans.empty() && k > 0){
            ans.pop_back();
            k--;
        }
        if(ans.empty()) return "0";
        return ans;
    }
};