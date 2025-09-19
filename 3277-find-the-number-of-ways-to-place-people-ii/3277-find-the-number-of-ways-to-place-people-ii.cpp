class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b) {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });
        for (int i = 0; i < n; i++) {
            int m= INT_MIN;
            for (int j = i + 1; j < n; j++) {
                if (points[i][1] >= points[j][1] && points[j][1] > m) {
                    ans++;
                    m = points[j][1];
                }
            }
        }

        return ans;
    }
};