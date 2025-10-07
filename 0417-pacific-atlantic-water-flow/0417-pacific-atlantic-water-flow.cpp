class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> pacific(m, vector<int>(n, 0));
        vector<vector<int>> atlantic(m, vector<int>(n, 0));

        queue<pair<int,int>> pq, aq;  // BFS queues

        // Pacific: top row + left column
        for (int i = 0; i < m; i++) {
            pq.push({i, 0});
            pacific[i][0] = 1;
        }
        for (int j = 0; j < n; j++) {
            pq.push({0, j});
            pacific[0][j] = 1;
        }

        // Atlantic: bottom row + right column
        for (int i = 0; i < m; i++) {
            aq.push({i, n - 1});
            atlantic[i][n - 1] = 1;
        }
        for (int j = 0; j < n; j++) {
            aq.push({m - 1, j});
            atlantic[m - 1][j] = 1;
        }

        // Direction vectors
        vector<int> dirs = {1, 0, -1, 0, 1};

        // BFS for each ocean
        auto bfs = [&](queue<pair<int,int>>& q, vector<vector<int>>& vis) {
            while (!q.empty()) {
                auto [r, c] = q.front();
                q.pop();
                for (int k = 0; k < 4; k++) {
                    int nr = r + dirs[k], nc = c + dirs[k+1];
                    if (nr < 0 || nc < 0 || nr >= m || nc >= n) continue;
                    if (vis[nr][nc]) continue;
                    // We can go from lower → higher because we reverse the flow
                    if (heights[nr][nc] < heights[r][c]) continue;
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        };
        bfs(pq, pacific);
        bfs(aq, atlantic);
        vector<vector<int>> result;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pacific[i][j] && atlantic[i][j])
                    result.push_back({i, j});
            }
        }
        return result;
    }
};
