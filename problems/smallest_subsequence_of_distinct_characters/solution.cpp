class Solution {
public:
    string smallestSubsequence(string s) {
       vector<int> lastIndex(26, 0);
       for(int i = 0; i < s.size(); i++){
            lastIndex[s[i] - 'a'] = i;
       }
       
       vector<bool> seen(26, false);
       string ans = "";
       
       for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            
            if(seen[ch - 'a']) continue;
            
            while(!ans.empty() && ch < ans.back() && lastIndex[ans.back() - 'a'] > i){
                seen[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            
            ans.push_back(ch);
            seen[ch - 'a'] = true;
       }
       
       return ans;
    }
};