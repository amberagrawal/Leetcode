class Solution {
public:
    int minSwaps(string s) {
        int mismatch = 0, count = 0;
        
        // Count mismatches of ']'
        for (char c : s) {
            if (c == '[') {
                mismatch++;  // '[' can balance future ']'
            } else {
                if (mismatch > 0) {
                    mismatch--;  // balanced by a previous '['
                } else {
                    count++;  // unbalanced ']', needs a swap
                }
            }
        }
        
        // Each swap fixes two mismatches
        return (count + 1) / 2;
    }
};
