class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;
        if(n <= 2) return nums;
        int ind1 = 0, ind2 = 0;
        for(int i = 0; i < n; i++){
            if(i == 0) arr1.push_back(nums[i]);
            else if(i == 1) arr2.push_back(nums[i]);
            else{                
                if(arr1[ind1] > arr2[ind2]){
                    ind1++;
                    arr1.push_back(nums[i]);
                }
                else{
                    ind2++;
                    arr2.push_back(nums[i]);
                }
            }
        }
        vector<int> ans(n);
        for(int i = 0; i < arr1.size(); i++) ans[i] = arr1[i];
        for(int i = 0; i < arr2.size(); i++) ans[i+arr1.size()] = arr2[i];
        return ans;
    }
};