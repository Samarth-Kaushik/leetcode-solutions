class Solution {
    void solve(int ind, int n, int k, vector<vector<int>>& ans, vector<int>& temp, int cnt){
        if(cnt == k){
            if(n == 0) ans.push_back(temp);
            return;
        }
        if(n < 0) return ;
        if(cnt > k) return ;
        for(int i = ind; i <= 9; i++){
            temp.push_back(i);
            cnt++;
            solve(i+1, n-i, k, ans, temp, cnt);
            cnt--;
            temp.pop_back();
        }

    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        if(k == 2 && n == 1) return ans;
        vector<int> temp;
        solve(1, n, k, ans, temp, 0);

        return ans;
    }
};