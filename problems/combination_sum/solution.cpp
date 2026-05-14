class Solution {
private:
    void findCombiantions(int ind, vector<int>& arr, vector<vector<int>>& ans, vector<int>temp, int target){
        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(temp);
            }
            return ;
        }

        // if(target == 0){
        //     ans.push_back(temp);
        //     return ;
        // }

        if(arr[ind] <= target){
            temp.push_back(arr[ind]);
            findCombiantions(ind, arr, ans, temp, target-arr[ind]);
            temp.pop_back();
        }

        findCombiantions(ind+1, arr, ans, temp, target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        findCombiantions(0, candidates, ans, temp, target);
        return ans;
    }
};