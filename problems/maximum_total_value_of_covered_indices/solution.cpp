class Solution {
public:
    long long maxTotal(vector<int>& nums, string s) {
        long long sum = 0;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                int L = i;
                while(i + 1 < n && s[i + 1] == '1'){
                    i++;
                }
                int R = i;
                if(L == 0){
                    for(int j = 0; j <= R; j++){
                        sum += nums[j];
                    }
                }
                else{
                    long long sum1 = 0;
                    int min_val = nums[L-1];
                    for(int j = L-1; j <= R; j++){
                        sum1 += nums[j];
                        min_val = min(nums[j], min_val);
                    }

                    sum += sum1 - min_val;
                }
            }
        }
        return sum;
    }
};