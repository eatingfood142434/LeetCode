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
    int count(TreeNode* root) {
        if (root == nullptr) return 0;
        else return (1 + count(root->left) + count(root->right));
    }
    int kthSmallest(TreeNode* root, int k) {
        if (count(root->left)+1 == k) return root->val;
        if (count(root->left) >= k) return kthSmallest(root->left, k);
        else return kthSmallest(root->right, k-1-count(root->left));
    }
};