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
    bool isPalindrome(ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        vector<int>v;
        ListNode*start=head;
        while(start!=NULL){
            v.push_back(start->val);
            start=start->next;
        }
        int i=0;
        int j=v.size()-1;
        while(i<=j){
            if(v[i]!=v[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};