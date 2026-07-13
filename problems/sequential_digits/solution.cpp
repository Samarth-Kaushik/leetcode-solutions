class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> ans;
        for(int i = 0; i < 9; i++){
            for(int j = i+1; j < 9; j++){
                string temp = s.substr(i, j-i+1);
                int temp0 = stoi(temp);
                if(temp0 >= low && temp0 <= high){
                    ans.push_back(temp0);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};