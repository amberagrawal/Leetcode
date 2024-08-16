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
    ListNode* insertionSortList(ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ListNode*start=head;
        vector<int>v;
        while(start!=NULL){
            v.push_back(start->val);
            start=start->next;
        }
        sort(v.begin(),v.end());
        ListNode*node1=new ListNode(v[0]);
        ListNode*temp=node1;
        for(int i=1;i<v.size();i++){
            ListNode*node2=new ListNode(v[i]);
            temp->next=node2;
            temp=node2;
        }
        return node1;
    }
};