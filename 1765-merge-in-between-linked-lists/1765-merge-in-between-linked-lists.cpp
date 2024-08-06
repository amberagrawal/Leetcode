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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ListNode* prev=list1;
        ListNode* forw=list1;
        int count=0;
        ListNode* start=list1;
        while(count<=b){
            count++;
         if(count<a){
            prev=prev->next;
         }
         forw=forw->next;
        }
        ListNode* tail=list2;
        while(tail->next!=NULL){
         tail=tail->next;
        }
        prev->next=list2;
        tail->next=forw;
        return list1;
    }
};