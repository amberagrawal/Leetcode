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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
      ListNode*start=list1;
       vector<int>v;
       while(start!=NULL){
        v.push_back(start->val);
        start=start->next;
       }
       ListNode*start1=list2;
       while(start1!=NULL){
        v.push_back(start1->val);
        start1=start1->next;
       }
       sort(v.begin(),v.end());
       if (v.empty()) {
        return nullptr;
       }
       ListNode*node1=new ListNode(v[0]);
       ListNode*head=node1;
       ListNode*temp=head;
       for(int i=1;i<v.size();i++){
        ListNode*node2=new ListNode(v[i]);
        temp->next=node2;
        temp=node2;
       }
       return head;
    }
};