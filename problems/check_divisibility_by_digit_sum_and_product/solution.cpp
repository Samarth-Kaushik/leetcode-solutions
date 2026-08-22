class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int temp = n;
        int pdt = 1;
        while(temp > 0){
            sum += temp%10;
            pdt *= temp%10;
            temp /= 10;
        }
        return !(n%(sum + pdt));
    }
};