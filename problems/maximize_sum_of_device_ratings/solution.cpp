#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        int m = units.size();
        if (m == 0) return 0;
        
        int n = units[0].size();
        
        if (n == 1) {
            long long total = 0;
            for (int i = 0; i < m; i++) {
                total += units[i][0];
            }
            return total;
        }

        if (m == 1) {
            return *min_element(units[0].begin(), units[0].end());
        }

        long long sum_min2 = 0;
        long long min_of_min2 = LLONG_MAX;
        long long absolute_min = LLONG_MAX;
        long long zero_ops_sum = 0;

        for (const auto& device : units) {
            long long m1 = LLONG_MAX;
            long long m2 = LLONG_MAX;
            
            for (int cap : device) {
                if (cap < m1) {
                    m2 = m1;
                    m1 = cap;
                } else if (cap < m2) {
                    m2 = cap;
                }
            }
            
            zero_ops_sum += m1;
            sum_min2 += m2;
            min_of_min2 = min(min_of_min2, m2);
            absolute_min = min(absolute_min, m1);
        }

        long long max_with_ops = sum_min2 - min_of_min2 + absolute_min;
        
        return max(zero_ops_sum, max_with_ops);
    }
};