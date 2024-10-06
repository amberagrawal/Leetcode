class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        // Split the sentences into words
        vector<string> v1 = splitWords(s1);
        vector<string> v2 = splitWords(s2);
        
        // Ensure v1 is always the smaller vector
        if (v1.size() > v2.size()) {
            swap(v1, v2);
        }

        int n = v1.size();
        int m = v2.size();

        // Check prefix match
        auto it_prefix = mismatch(v1.begin(), v1.end(), v2.begin());
        int prefix_len = distance(v1.begin(), it_prefix.first);

        // Check suffix match
        auto it_suffix = mismatch(v1.rbegin(), v1.rend(), v2.rbegin());
        int suffix_len = distance(v1.rbegin(), it_suffix.first);

        // The sum of matched prefix and suffix lengths must cover all of v1
        return prefix_len + suffix_len >= n;
    }

private:
    // Helper function to split the string into words using a functional approach
    vector<string> splitWords(const string &s) {
        istringstream stream(s);
        return vector<string>{istream_iterator<string>(stream), istream_iterator<string>()};
    }
};
