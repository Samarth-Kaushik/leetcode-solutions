class Solution {
public:
    void solve(vector<string>& ans, string& s, int open, int close){
        if(open == close && close == 0){
            ans.push_back(s);
            return;
        }
        if(open > 0){
            s += '(';
            solve(ans, s, open-1, close);
            s.pop_back();
        }
        if(close > open){
            s += ')';
            solve(ans, s, open, close-1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        solve(ans, s, n , n);
        return ans;
    }
};