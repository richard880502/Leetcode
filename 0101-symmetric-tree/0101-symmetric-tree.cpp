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
    bool isSymmetric(TreeNode* root) {
        stack <TreeNode*> mystack;
        
        mystack.push(root->left);
        mystack.push(root->right);

        while(!mystack.empty())
        {
            TreeNode *right = mystack.top();
            mystack.pop();
            TreeNode *left = mystack.top();
            mystack.pop();

            if(!right && !left)continue;
            if((!right && left) || (right && !left) || (right->val != left->val))return false;

            mystack.push(right->left);
            mystack.push(left->right);
            mystack.push(right->right);
            mystack.push(left->left);
        }
        return true;
    }
};