class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int initialSum = start[0] + start[1];
        int finalSum = target[0] + target[1];
        if((initialSum&1) == (finalSum&1)) return true;
        else return false;
    }
};