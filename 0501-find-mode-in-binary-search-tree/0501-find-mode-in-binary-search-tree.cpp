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
    vector<int> findMode(TreeNode* root) {
        map<int,int>mp;
        int maxi=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*temp=q.front();
            q.pop();
            mp[temp->val]++;
            maxi=max(maxi,mp[temp->val]);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        vector<int>v;
        for(auto i:mp){
            if(i.second==maxi){
                v.push_back(i.first);
            }
        }
        return v;
    }
};