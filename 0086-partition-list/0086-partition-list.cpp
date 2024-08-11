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
    ListNode* partition(ListNode* head, int x) {
       ios::sync_with_stdio(false);
        cin.tie(nullptr);
       if(head==NULL){
            return nullptr;
        }
        if(head->next==NULL){
            return head;
        }
      ListNode*start=head;
      vector<int>v;
      while(start!=NULL){
        if(start->val<x){
        v.push_back(start->val);
        }
       start=start->next;
      }  
      ListNode*start1=head;
       while(start1!=NULL){
        if(start1->val>=x){
        v.push_back(start1->val);
        }
       start1=start1->next;
      }  
      if(v.empty()){
        return nullptr;
      }
      ListNode*node1=new ListNode(v[0]);
      ListNode*temp=node1;
      for(int j=1;j<v.size();j++){
       ListNode*node2=new ListNode(v[j]); 
       temp->next=node2;
       temp=temp->next;
      }
      return node1;  
    }
};