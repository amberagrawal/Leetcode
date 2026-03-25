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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode*f(vector<int>&v,int l,int r){
        if(l>r){
            return NULL;
        }
        int mid=l+(r-l)/2;
        TreeNode*temp=new TreeNode(v[mid]);
        temp->left=f(v,l,mid-1);
        temp->right=f(v,mid+1,r);
        return temp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        ListNode*temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        return f(v,0,v.size()-1);
    }
};