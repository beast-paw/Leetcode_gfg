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
    bool pre(TreeNode* root,int k,map<int,int>&m)
    {
        if(!root)
            return 0;
        if(m[k-root->val])
            return true;
        m[root->val]++;
        bool left=pre(root->left,k,m);
        bool right=pre(root->right,k,m);
        return left||right;
    }
    bool findTarget(TreeNode* root, int k) {
        map<int,int>m;
        return pre(root,k,m);
    }
};