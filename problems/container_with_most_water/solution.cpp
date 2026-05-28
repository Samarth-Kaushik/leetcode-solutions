class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n - 1;
        int maxArea = 0;
        int area = 0;
        while(i < j){
            area = (j - i) * min(height[j] , height[i]);
            maxArea = max(maxArea, area);
            if(height[j] <= height[i]) j--;
            else i++;
        }
        return maxArea;
    }
};