class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int l = 0, r = 0;
        int size = 0, maxSize = 0;
        vector<int> v(26, 0);
        int maxFreq = 0;
        while(r < answerKey.size()){
            v[answerKey[r] - 'A']++;
            maxFreq = max(maxFreq, v[answerKey[r] - 'A']);
            if((r - l + 1) - maxFreq > k){
                v[answerKey[l] - 'A']--;
                l++;
            }else{
                size = r - l + 1;
                maxSize = max(size, maxSize);
            }
            r++;
        }
        return maxSize;
    }
};