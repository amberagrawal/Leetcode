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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* f=head;
        ListNode* m=head;
        ListNode* l=head;
        m=m->next;
        if(m!=NULL){
            l=m->next;
            if(l==NULL){
                return {-1,-1};
            }
        }
        else{
            return {-1,-1};
        }
        vector<int>v;
        int a=1;
        while(l){
            if(m->val>f->val&&m->val>l->val){
                v.push_back(a);
            }
            else if(m->val<f->val&&m->val<l->val){
                v.push_back(a);
            }
            a++;
            l=l->next;
            m=m->next;
            f=f->next;
        }
        if(v.size() < 2){
            return {-1,-1};
        }
        int mini=1e9;
        int maxi=v[v.size()-1]-v[0];
        for(int i=1;i<v.size();i++){
            mini=min(mini,v[i]-v[i-1]);
        }
        return {mini,maxi};
    }
};