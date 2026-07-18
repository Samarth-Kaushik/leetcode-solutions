class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        long long k = n-1;
        long long upA = (k+1)/2, upB = k/2;
        long long valA = s + upA*m - max(upA-1, 0LL);
        long long valB = s + upB * (m-1);
        return max(valA, valB);
    }
};