/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void inOrder(TreeNode* node, int low, int high, int& sum) {
        if (node == NULL)
            return;
        inOrder(node->left, low, high, sum);
        if (node->val >= low && node->val <= high)
            sum += node->val;
        inOrder(node->right, low, high, sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {

        int sum = 0;
        inOrder(root, low, high, sum);

        return sum;
    }
};