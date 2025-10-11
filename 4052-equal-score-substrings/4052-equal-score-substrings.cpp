class Solution {
public:
    bool scoreBalance(string s) {
        int n = s.size();
        int total = 0;
        for (char c : s) total += (c - 'a' + 1);
        int prefix = 0;
        for (int i = 0; i < n - 1; i++) { // split must leave right non-empty
            prefix += (s[i] - 'a' + 1);
            if (prefix == total - prefix)
                return true;
        }
        return false;
    }
};
