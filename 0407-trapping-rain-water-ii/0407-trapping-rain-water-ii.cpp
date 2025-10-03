class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int m = heightMap.size();
        if (m == 0) return 0;
        int n = heightMap[0].size();
        if (n == 0) return 0;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        using Cell = pair<int, pair<int,int>>; 
        priority_queue<Cell, vector<Cell>, greater<Cell>> pq;
        for (int i = 0; i < m; i++) {
            pq.push({heightMap[i][0], {i,0}});
            pq.push({heightMap[i][n-1], {i,n-1}});
            visited[i][0] = visited[i][n-1] = true;
        }
        for (int j = 0; j < n; j++) {
            pq.push({heightMap[0][j], {0,j}});
            pq.push({heightMap[m-1][j], {m-1,j}});
            visited[0][j] = visited[m-1][j] = true;
        }
        int water = 0;
        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        while (!pq.empty()) {
            auto [h, cell] = pq.top(); pq.pop();
            int i = cell.first, j = cell.second;
            for (auto &d : dirs) {
                int ni = i + d[0], nj = j + d[1];
                if (ni < 0 || nj < 0 || ni >= m || nj >= n || visited[ni][nj]) continue;
                visited[ni][nj] = true;
                if (heightMap[ni][nj] < h) {
                    water += h - heightMap[ni][nj]; 
                }
                pq.push({max(h, heightMap[ni][nj]), {ni,nj}});
            }
        }
        return water;
    }
};
