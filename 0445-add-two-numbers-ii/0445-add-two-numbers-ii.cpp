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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       vector<int>v1;
       vector<int>v2;
       ListNode* start1=l1;
       ListNode* start2=l2;
       while(start1!=NULL){
        v1.push_back(start1->val);
        start1=start1->next;
       } 
       while(start2!=NULL){
        v2.push_back(start2->val);
        start2=start2->next;
       } 
       if(v1.size()<v2.size()){
        while(v1.size()!=v2.size()){
            v1.insert(v1.begin(),0);
        }
       }
       else{
        while(v1.size()!=v2.size()){
            v2.insert(v2.begin(),0);
        }
       }
       vector<int>v3;
       int carry=0;
       int i=max(v2.size()-1,v1.size()-1);
       while(i>=0){
            int num=v1[i]+v2[i]+carry;
            carry=num/10;
            v3.insert(v3.begin(),num%10);
            i--;
       }
       if(carry>0){
       v3.insert(v3.begin(),carry);
       }
       ListNode*node1=new ListNode(v3[0]);
        ListNode*temp=node1;
        for(int i=1;i<v3.size();i++){
         ListNode*node2=new ListNode(v3[i]);
            temp->next=node2;
            temp=node2;
        }
        return node1;
    }
};