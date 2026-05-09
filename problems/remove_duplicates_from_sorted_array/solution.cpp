class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        // vector<int>v;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }
        int i = 0;
        for(const auto& ele: s){
            nums[i] = ele;
            i++;
        }
        for(i = s.size(); i < n; i++) nums[i] = 1;

        return s.size();
    }
};