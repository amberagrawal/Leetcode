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
    void reorderList(ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if(head==NULL||head->next==NULL){
            return;
        }
        vector<int>v;
        ListNode*start=head;
        while(start!=NULL){
            v.push_back(start->val);
            start=start->next;
        }
        if(v.empty()){
            return;
        }
        int p=0;
        int i=0;
        int j=v.size()-1;
        ListNode*temp=head;
        while(temp!=NULL){
            if(p%2==0){
                temp->val=v[i];
                i++;
            }
            else{
                temp->val=v[j];
                j--;
            }
            temp=temp->next;
            p++;
        }
    }
};