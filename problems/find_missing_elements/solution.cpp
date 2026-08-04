class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(i > 0){
                if(nums[i] - nums[i-1] != 1){
                    int temp = nums[i-1];
                    while(nums[i] - temp != 1){
                        temp++;
                        ans.push_back(temp);
                    }
                }
            }
        }
        return ans;
    }
};