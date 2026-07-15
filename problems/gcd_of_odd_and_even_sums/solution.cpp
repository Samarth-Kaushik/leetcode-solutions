class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evSum = 0, odSum = 0;
       for(int i = 1; i <= 2*n; i++){
            if(i & 1) odSum += i;
            else evSum += i;
       } 
       return __gcd(evSum, odSum) ;
    }
};