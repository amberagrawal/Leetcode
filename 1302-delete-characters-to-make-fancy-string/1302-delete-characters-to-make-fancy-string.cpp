class Solution {
public:
    string makeFancyString(string s) {
        string result;
        int count = 1; // To count consecutive identical characters
        result += s[0]; // Initialize the result with the first character

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1; // Reset count for a new character
            }

            // Only add the character if the count is less than 3
            if (count < 3) {
                result += s[i];
            }
        }

        return result;
    }
};
