class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size();
        vector<int> diff(n+1, 0);
        for(int i = 0; i < n; i++){
            if(lights[i] > 0){
                int st = max(0, i - lights[i]);
                int en = min(n-1, lights[i] + i);
                diff[st]++;
                diff[en + 1]--;
            }
        }
        vector<bool> light(n, false);
        int bright = 0;
        for(int i = 0; i < n; i++){
            bright += diff[i];
            if(bright > 0) light[i] = true;
        }

        int bulb = 0;
        for(int i = 0; i < n; i++){
            if(light[i] == false){
                bulb++;
                i+= 2;
            }
        }
        return bulb;
    }
};