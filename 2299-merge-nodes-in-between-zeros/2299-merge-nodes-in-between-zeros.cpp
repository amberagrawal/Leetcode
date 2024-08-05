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
    ListNode* mergeNodes(ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int>v;
        head=head->next;
        ListNode*start=head;
        int sum=0;
        while(start!=NULL){
            sum=sum+(start->val);
            if(start->val==0){
            v.push_back(sum);
            sum=0;
            }
            start=start->next;
        }
        ListNode*node1=new ListNode(v[0]);
        ListNode*temp=node1;
        head=node1;
        for(int i=1;i<v.size();i++){
            ListNode*node2=new ListNode(v[i]);
            temp->next=node2;
            temp=node2;
        }
        temp->next=NULL;
        return head;
    }
};