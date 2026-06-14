class Solution {
public:
    bool checkGoodInteger(int n) {
        int temp = n;
        int digitSum1 = 0;
        int digitSum2 = 0;
        while(temp != 0){
            digitSum1 += temp%10;
            digitSum2 += (temp%10)*(temp%10);
            temp /= 10;
        }

        // int temp2 = n*n;
        
        // while(temp2 != 0){
        //     digitSum2 += temp2%10;
        //     temp2 /= 10;
        // }
        if((digitSum2 - digitSum1) >= 50) return true;
        else return false;
    }
};