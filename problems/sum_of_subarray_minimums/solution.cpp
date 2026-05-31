class Solution {
private:
    vector<int> nextSmallerElement(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        for(int i = n - 1; i >= 0; i--){
            while(st.top() != -1 && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElement(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        for(int i = 0; i < n; i++){
            while(st.top() != -1 && arr[st.top()] > arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> next;
        vector<int> prev;
        const long long MOD = 1e9 + 7;
        next = nextSmallerElement(arr);
        prev = prevSmallerElement(arr);
        long long sum = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(next[i] == -1) next[i] = n;
            long long totalSubarray = ((i - prev[i]) * (next[i] - i))%MOD;
            long long contri = (arr[i] * totalSubarray) % MOD;
            sum = (sum + contri) % MOD;
        }

        return sum;
    }
};