class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int x1 = source[0];
        int y1 = source[1];
        int x2 = target[0];
        int y2 = target[1];
        // 1 white
        int colorI = ((x1+y1) % 2)? 1 : 0;
        int colorE = ((x2+y2) % 2)? 1 : 0;
        if(colorI != colorE) return -1;
        else{
            if(abs(x1 - x2) == abs(y1 - y2)) return 1;
        }
        return 2;
     }
};