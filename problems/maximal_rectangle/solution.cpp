class Solution {
private:
    vector<int> prevSmallerElement(vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n);
        st.push(-1);
        for(int i = 0; i < n; i++){
            while(st.top() != -1 && arr[st.top()] >= arr[i]) st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> nextSmallerElement(vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n);
        st.push(-1);
        for(int i = n - 1; i >= 0; i--){
            while(st.top() != -1 && arr[st.top()] >= arr[i]) st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectArea(vector<int>& arr){
        int n = arr.size();
        vector<int> next;
        vector<int> prev;
        next = nextSmallerElement(arr);
        prev = prevSmallerElement(arr);
        int maxArea = INT_MIN;
        int area = 0;
        for(int i = 0; i < n; i++){
            if(next[i] == -1) next[i] = n;
            area = arr[i] * (next[i] - prev[i] - 1);
            maxArea = max(area, maxArea);
        }
        return maxArea;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        vector<int> heights(matrix[0].size(), 0);
        long long sum = 0;
        int maxArea = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == '1') heights[j]++;
                else heights[j] = 0;
            }
            maxArea = max(maxArea, largestRectArea(heights));
        }
        return maxArea;
    }
};