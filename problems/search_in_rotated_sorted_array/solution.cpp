class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int pivot = 0;
        while(low < high){
            int mid = low + (high - low)/2;
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }
            else high = mid;
        }
        pivot = low;
        if(nums[pivot] == target) return pivot;
        
        if(target >= nums[pivot] && nums[n-1] >= target){
            low = pivot;
            high = n -1;
            while(low < high){
                int mid = low + (high - low)/2;
                if(nums[mid] == target) return mid ;
                else if(target > nums[mid]){
                    low = mid + 1;
                }else{
                    high = mid;
                }
            }
            if(nums[high] == target) return high;
        }else{
            low = 0;
            high = pivot;
            while(low < high){
                int mid = low + (high - low)/2;
                if(nums[mid] == target) return mid;
                else if(target > nums[mid]){
                    low = mid + 1;
                }else{
                    high = mid;
                }
            }

            if(nums[high] == target) return high;
            
        }

        return -1;
    }
};