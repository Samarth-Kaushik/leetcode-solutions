class Solution {
private:
    void solve(vector<string>& ans, string& s, int sum, int ind, int n, int k){
        if(ind == n){
            ans.push_back(s);
            return ;
        }
        s.push_back('0');
        solve(ans, s, sum, ind + 1, n, k);
        s.pop_back();
        if((s.empty() || s.back() != '1') &&(sum + ind <= k)){
            s.push_back('1');
            solve(ans, s, sum + ind, ind+1, n, k);
            s.pop_back();
        }
    }
public:
    vector<string> generateValidStrings(int n, int k) {
        int sum = 0;
        string s = "";
        vector<string> ans;
        solve(ans, s, 0, 0, n, k);
        return ans;
    }
};