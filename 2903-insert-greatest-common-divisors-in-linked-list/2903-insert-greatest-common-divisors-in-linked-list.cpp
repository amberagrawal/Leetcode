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
    int solve(int a, int b) {
    // while (b != 0) {
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // return a;
    int x=1;
    for(int i=2;i<=a;i++){
        if(a%i==0&&b%i==0){
            x=i;
        }
    }
    return x;
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ListNode*start=head->next;
        ListNode*prev=head;
        while(start!=NULL){
        int c=solve(prev->val,start->val);
        ListNode* node1=new ListNode(c);
        prev->next=node1;
        node1->next=start;
        prev=start;
        start=start->next;
        }
        return head;
    }
};