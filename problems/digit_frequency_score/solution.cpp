class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int , int> mpp;
        long long temp = n;
        while(temp != 0){
            int digit = temp % 10;
            mpp[digit]++;
            temp/= 10;
        }
        long long sum = 0;
        for(auto const&[val, freq] : mpp){
            sum += val*freq;
        }
        return sum;
    }
};