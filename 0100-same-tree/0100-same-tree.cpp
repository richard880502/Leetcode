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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack <TreeNode*> Mystack;
        Mystack.push(p);
        Mystack.push(q);

        while(!Mystack.empty())
        {
            TreeNode *left = Mystack.top();
            Mystack.pop();
            TreeNode *right = Mystack.top();
            Mystack.pop();

            if (left == NULL && right == NULL)continue;
            if (left==NULL || right == NULL) return false;
            if (left->val != right->val) return false;

            Mystack.push(left->left);
            Mystack.push(right->left);

            Mystack.push(left->right);
            Mystack.push(right->right);
        }
        return true;
    }
};