class Solution {
public:
    int maxProduct(int n) {
        priority_queue<int, vector<int>, greater<int>> q;
        int temp = n;
        while(temp != 0){
            int digit = temp % 10;
            if(q.size() >= 2){
                if(digit > q.top()){
                    q.pop();
                    q.push(digit);
                }
            }
            else{
                q.push(digit);
            }
            temp /= 10;
        }
        int ans = 1;
        while(!q.empty()){
            ans *= q.top();
            q.pop();
        }
        return ans;
    }
};