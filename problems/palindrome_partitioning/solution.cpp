class Solution {
private:
    void funct(int ind, string s, vector<string>& path, vector<vector<string>>& res){
        if(ind == s.size()){
            res.push_back(path);
            return ;
        }
        for(int i = ind; i < s.size(); i++){
            if(isPalindrome(s, ind, i)){
                path.push_back(s.substr(ind, i - ind + 1));
                funct(i+1, s, path, res);
                path.pop_back();
            }
        }
    }
    
    bool isPalindrome(string s, int i, int j){
        while(i <= j){
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        funct(0, s, path, res);
        return res;
    }
};