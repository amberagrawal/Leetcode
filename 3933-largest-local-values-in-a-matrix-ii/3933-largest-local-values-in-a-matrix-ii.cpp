class Solution {
public:
    int countLocalMaximums(vector<vector<int>>& mat) {
        vector<tuple<int,int,int>> v;

        int r = mat.size();
        int c = mat[0].size();

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(mat[i][j] != 0) {
                    v.push_back({mat[i][j], i, j});
                }
            }
        }

        sort(v.begin(), v.end());

        vector<int> pos(201, -1);

        for(int i = 0; i < (int)v.size(); i++) {
            int val = get<0>(v[i]);
            if(pos[val] == -1) pos[val] = i;
        }

        int count = 0;

        for(int i = 0; i < (int)v.size(); i++) {

            auto &[num, a, b] = v[i];

            int start = -1;

            for(int val = num + 1; val <= 200; val++) {
                if(pos[val] != -1) {
                    start = pos[val];
                    break;
                }
            }

            if(start == -1) {
                count++;
                continue;
            }

            bool f = true;

            for(int j = start; j < (int)v.size(); j++) {

                auto &[num1, a1, b1] = v[j];

                if((a1 == a + num || a1 == a - num) &&
                   (b1 == b + num || b1 == b - num)) {
                    continue;
                }

                if(a1 >= a - num && a1 <= a + num &&
                   b1 >= b - num && b1 <= b + num) {
                    f = false;
                    break;
                }
            }

            if(f) count++;
        }

        return count;
    }
};