/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
TreeNode*search(TreeNode* root, TreeNode *target)
{
    if (root==NULL )
        return NULL;
    if (root->val==target->val)
        return root;
    TreeNode* left= search (root->left,target);
    if (left!=NULL)
        return left;
    return  search(root->right, target);
}
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return search (cloned,target);
    }
};