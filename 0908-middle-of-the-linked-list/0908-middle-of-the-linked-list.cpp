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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode*start=head;
        while(start!=NULL){
            start=start->next;
            count++;
        }
        int a=0;
        if(count%2!=0){
           a=(count+1)/2;
        }
        else{
            a=(count/2)+1;
        }
        ListNode*temp=head;
        int data=0;
        while(a>0){
        data=temp->val;
        if(a>1){
        temp=temp->next;
        }
        a--;
        }
        return temp;
    }
};