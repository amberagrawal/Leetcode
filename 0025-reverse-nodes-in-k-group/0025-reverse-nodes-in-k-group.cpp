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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int>v;
        ListNode*start=head;
        while(start!=NULL){
            v.push_back(start->val);
            start=start->next;
        }
        if(v.empty()){
            return nullptr;
        }
        int a=v.size()/k;
        int i=0;
        while(a>0){
            reverse(v.begin()+i,v.begin()+i+k);
            i=i+k;
            a--;
        }
        ListNode*node1=new ListNode(v[0]);
        ListNode*temp=node1;
        for(int i=1;i<v.size();i++){
         ListNode*node2=new ListNode(v[i]);  
         temp->next=node2;
         temp=temp->next;   
        }
        return node1;
    }
};