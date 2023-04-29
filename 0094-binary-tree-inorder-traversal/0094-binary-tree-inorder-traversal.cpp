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
    vector<int> inorderTraversal(TreeNode* root) {
     vector <int> inorder;
     if (!root) return inorder;
     stack <TreeNode*> mystack;

     while(root || !mystack.empty())
     {
         if (root)
         {
             mystack.push(root);
             root = root->left;
         }
         else
         {
             TreeNode *temp = mystack.top();
             mystack.pop();
             inorder.push_back(temp->val);
             root = temp->right;
         }
     }
     return inorder;
    }
};