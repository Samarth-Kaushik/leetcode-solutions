class Solution {
public:
    int digitPdt(int n){
        int pdt = 1;
        while(n != 0){
            pdt *= n%10;
            n /= 10;
        }
        return pdt;
    }

    int smallestNumber(int n, int t) {
        int pdt = digitPdt(n);
        while(pdt % t != 0){
            n++;
            pdt = digitPdt(n);
        }
        return n;
    }
};