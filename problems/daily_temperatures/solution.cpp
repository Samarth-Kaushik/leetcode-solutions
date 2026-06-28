class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;
        
        for(int j = n - 1; j >= 0; j--){
            while(!st.empty() && temperatures[j] >= temperatures[st.top()]){
                st.pop();
            }
            
            if(!st.empty()) {
                ans[j] = st.top() - j;
            }
            
            st.push(j);
        }
        return ans;
    }
};