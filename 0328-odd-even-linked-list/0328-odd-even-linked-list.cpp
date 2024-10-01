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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        vector<int>o;
        vector<int>e;
        ListNode*start=head;
        int count=1;
        while(start!=NULL){
            if(count%2!=0){
                o.push_back(start->val);
            }
            else{
                e.push_back(start->val);
            }
            start=start->next;
            count++;
        }
        ListNode*node1=new ListNode(o[0]);
        ListNode*temp=node1;
        for(int i=1;i<o.size();i++){
         ListNode*node2=new ListNode(o[i]);
            temp->next=node2;
            temp=node2;
        }
        for(int i=0;i<e.size();i++){
         ListNode*node2=new ListNode(e[i]);
            temp->next=node2;
            temp=node2;
        }
        return node1;
    }
};