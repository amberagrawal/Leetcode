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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if(lists.size()==0){
            return nullptr;
        }
        vector<int>v;
        for(int i=0;i<lists.size();i++){
            ListNode*start=lists[i];
            while(start!=NULL){
                v.push_back(start->val);
                start=start->next;
            }
        }
        if(v.empty()){
            return nullptr;
        }
        sort(v.begin(),v.end());
        ListNode*node1=new ListNode(v[0]);
        ListNode*head=node1;
        ListNode*temp=node1;
        for(int i=1;i<v.size();i++){
            ListNode*node2=new ListNode(v[i]);
            temp->next=node2;
            temp=temp->next;
        }
        return head;
    }
};