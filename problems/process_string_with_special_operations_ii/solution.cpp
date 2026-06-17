class Solution {
public:
    char processStr(string s, long long k) {
        long long l = 0;
        int n = s.size();
        
        for(int i = 0; i < n; i++){
            if(s[i] == '*'){
                if(l > 0) l--; 
            }
            else if(s[i] == '#'){
                l += l;
            }
            else if(s[i] == '%'){
                
            }
            else{
                l++; 
            }
        }
        
        if(k >= l) return '.';
        int i = n - 1;
        while(i >= 0){
            if(s[i] == '*'){
                l++;
            }
            else if(s[i] == '#'){
                l /= 2;
                if(k >= l) {
                    k -= l;
                }
            }
            else if(s[i] == '%'){
                k = l - 1 - k; 
            }
            else {
                
                l--;
                if(l == k){
                    return s[i];
                }
            }
            i--;
        }
        
        return '.';
    }
};