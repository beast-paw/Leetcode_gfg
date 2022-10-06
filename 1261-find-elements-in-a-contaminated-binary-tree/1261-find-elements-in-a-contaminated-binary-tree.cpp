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
class FindElements {
public:
    int x=0;
    set<int>s;
    void pre(TreeNode *root,int x)
    {
        if(!root)
            return ;
        root->val=x;
        s.insert(x);
        if(root->left)
            pre(root->left,2*x+1);
        if(root->right)
            pre(root->right,2*x+2);
    }
    TreeNode* node;
    FindElements(TreeNode* root) {
        node=root;
        pre(node,0);
    }
    
    bool find(int target) {
        if(s.find(target)!=s.end())
            return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */