class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> ans;
        int n = events.size();
        int counter = 0, score = 0;
        for(int i = 0; i < n; i++){
            if(events[i] == "W") counter++;
            else if(events[i] == "WD" || events[i] == "NB") score++;
            else{
                score += events[i][0] - '0';
            }
            if(counter == 10) break;
        }
        ans.push_back(score);
        ans.push_back(counter);

        return ans;
    }
};