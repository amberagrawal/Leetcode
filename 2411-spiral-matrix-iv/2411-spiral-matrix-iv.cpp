/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ListNode* start = head;
        vector<int> v;
        while (start != NULL) {
            v.push_back(start->val);
            start = start->next;
        }
        int right = 0;
        int left = n - 1;
        int top = 0;
        int bottom = m - 1;
        int j = 0;
        vector<vector<int>> matrix(m, vector<int>(n, -1));
        int count = 0;
        while (count < m * n) {
            for (int i = right; i <= left && count < m * n; i++) {
                if (j < v.size()) {
                    matrix[top][i] = v[j++];
                }
                count++;
            }
            top++;
            for (int i = top; i <= bottom && count < m * n; i++) {
                if (j < v.size()) {
                    matrix[i][left] = v[j++];
                }
                count++;
            }
            left--;
            for (int i = left; i >= right && count < m * n; i--) {
                if (j < v.size()) {
                    matrix[bottom][i] = v[j++];
                }
                count++;
            }
            bottom--;
            for (int i = bottom; i >= top && count < m * n; i--) {
                if (j < v.size()) {
                    matrix[i][right] = v[j++];
                }
                count++;
            }
            right++;
        }
        return matrix;
    }
};
