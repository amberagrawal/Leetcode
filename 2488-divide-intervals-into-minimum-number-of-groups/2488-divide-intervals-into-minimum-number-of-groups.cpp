class Solution {
public:
    int minGroups(vector<vector<int>>& v) {
        vector<pair<int, int>> events;
        for (auto &interval : v) {
            events.push_back({interval[0], 1});  
            events.push_back({interval[1] + 1, -1}); 
        }
        sort(events.begin(), events.end());
        int activeIntervals = 0;
        int maxIntervals = 0;
        for (auto &event : events) {
            activeIntervals += event.second;
            maxIntervals = max(maxIntervals, activeIntervals);
        }
        return maxIntervals;
    }
};
