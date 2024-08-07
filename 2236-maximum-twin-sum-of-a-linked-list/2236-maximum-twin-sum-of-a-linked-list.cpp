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
    int pairSum(ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ListNode*start=head;
        vector<int>v;
        while(start!=NULL){
         v.push_back(start->val);
         start=start->next;
        }
        int sum=0;
        int maxi=0;
        int i=0;
        int j=v.size()-1;
        while(i<=j){
            sum=v[i]+v[j];
            maxi=max(maxi,sum);
            sum=0;
            i++;
            j--;
        }
        return maxi;
    }
};