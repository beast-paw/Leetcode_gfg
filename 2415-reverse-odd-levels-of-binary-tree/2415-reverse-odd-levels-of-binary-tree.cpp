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
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
        while(!q.empty())
        {
            int t=q.size();
            queue<TreeNode*>q2;
            vector<int>v;
            while(t--)
            {
                TreeNode *curr=q.front();
                q2.push(curr);
                v.push_back(curr->val);
                q.pop();
                if(curr->left)
                  q.push(curr->left);
                if(curr->right)
                  q.push(curr->right);
            }
            if(cnt%2!=0)
            {
                reverse(v.begin(),v.end());
                int i=0;
                while(!q2.empty())
                {
                     TreeNode *curr=q2.front();
                    curr->val=v[i++];
                    q2.pop();
                }
            }
            cnt++;
        }
        return root;
        
        
    }
};