class Twitter {
    // user -> {time, tweetId}
    unordered_map<int, vector<pair<int, int>>> tweet;
    unordered_map<int, unordered_set<int>> followMap;
public:
    int time = 0;
    Twitter() {
    }
    
    void postTweet(int userId, int tweetId) {
        tweet[userId].push_back({time++, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> ans;

        followMap[userId].insert(userId);
        //{time, tweetId, userId, ind}
        priority_queue<vector<int>>pq;
        for(auto& user : followMap[userId]){
            if(!(tweet[user].empty())){
                int ind = tweet[user].size()-1;

                pq.push({
                    tweet[user][ind].first,
                    tweet[user][ind].second,
                    user,
                    ind
                });
            }
        }
        while(!pq.empty() && ans.size() < 10){
            auto curr = pq.top();
            pq.pop();
            int tweetId = curr[1];
            int user = curr[2];
            int ind = curr[3];
            ans.push_back(tweetId);
            if(ind > 0){
                ind--;
                pq.push({
                    tweet[user][ind].first,
                    tweet[user][ind].second,
                    user,
                    ind
                });
            }
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        followMap[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        if(followerId != followeeId){
            followMap[followerId].erase(followeeId);
        }
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */