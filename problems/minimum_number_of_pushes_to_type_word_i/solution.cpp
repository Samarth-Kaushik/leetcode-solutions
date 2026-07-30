class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int cnt = 0;
        if(n <= 8){
            return n;
        }
        else{
            cnt += 8;
            n -= 8;
            if(n >= 8){
                cnt += 8*2;
                n -= 8;
                if(n >= 8){
                    cnt += 8*3;
                    n -= 8;
                    cnt += n*4;
                }else{
                    cnt += n*3;
                }
            }else{
                cnt += 2*n;
            }
        }
        return cnt;
    }
};