class Solution {
public:
    int maxDistance(string moves) {
        int x = 0;
        int y = 0;
        int cnt = 0;
        int n = moves.size();
        for(int i = 0; i < n; i++){
            if(moves[i] == 'U') { 
                y++;
            }
            else if(moves[i] == 'D') { 
                y--;
            }
            else if(moves[i] == 'R') { 
                x++;
            }
            else if(moves[i] == 'L') { 
                x--;
            }
            else if(moves[i] == '_') { 
                cnt++;
            }
        }
        
        return (abs(x) + abs(y) + cnt);
    }
};