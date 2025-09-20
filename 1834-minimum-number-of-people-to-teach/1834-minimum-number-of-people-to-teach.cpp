class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& l, vector<vector<int>>& f) {
        int m = l.size();
        vector<unordered_set<int>> knows(m+1);
        for (int i = 0; i < m; i++) {
            for (int lang : l[i]) {
                knows[i+1].insert(lang); 
            }
        }
        unordered_set<int> candidates;
        for (auto& fr : f) {
            int u = fr[0], v = fr[1];
            bool ok = false;
            for (int lang : knows[u]) {
                if (knows[v].count(lang)) {
                    ok = true;
                    break;
                }
            }
            if (!ok) {
                candidates.insert(u);
                candidates.insert(v);
            }
        }
        if (candidates.empty()) return 0;
        vector<int> cnt(n+1, 0);
        for (int user : candidates) {
            for (int lang : knows[user]) {
                cnt[lang]++;
            }
        }
        int best = 0;
        for (int lang = 1; lang <= n; lang++) {
            best = max(best, cnt[lang]);
        }
        return (int)candidates.size() - best;
    }
};
