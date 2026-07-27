class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi1 = 0;
        int maxi2 = 0;
        int ind = -1;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] > maxi1){
                maxi2 = maxi1;
                maxi1 = nums[i];
                ind = i;
            }
            if(nums[i] > maxi2 && i != ind){
                maxi2 = nums[i];
            }
        }
        return (maxi1-1)*(maxi2-1);
    }
};