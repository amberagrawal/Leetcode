#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        if (n == 0) return 0;

        // prefix[i][ch] -> frequency of ch up to index i
        vector<vector<int>> prefix(n, vector<int>(26, 0));
        prefix[0][s[0] - 'a'] = 1;

        for (int i = 1; i < n; i++) {
            for (int c = 0; c < 26; c++)
                prefix[i][c] = prefix[i - 1][c];
            prefix[i][s[i] - 'a']++;
        }

        int ans = 0;
        vector<int> count(26);

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                // get frequencies in O(26)
                for (int c = 0; c < 26; c++) {
                    if (i == 0) count[c] = prefix[j][c];
                    else count[c] = prefix[j][c] - prefix[i - 1][c];
                }

                // check balanced
                int val = -1;
                bool ok = true;
                for (int c = 0; c < 26; c++) {
                    if (count[c] == 0) continue;
                    if (val == -1) val = count[c];
                    else if (count[c] != val) { ok = false; break; }
                }

                if (ok && val != -1)
                    ans = max(ans, j - i + 1);

                // small optimization: no need to continue if max possible length < current answer
                if (n - i <= ans) break;
            }
        }

        return ans;
    }
};