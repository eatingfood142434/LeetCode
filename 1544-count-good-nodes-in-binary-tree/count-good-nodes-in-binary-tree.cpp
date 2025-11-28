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
    int goodNodes(TreeNode* root) {
        int count = 0;
        queue<pair<TreeNode*,int>> q;
        q.push({root, root->val});
        while (!q.empty()) {
            TreeNode* n = q.front().first;
            int v = q.front().second;
            q.pop();
            if (n->val >= v) count++;
            if (n->left != nullptr) q.push({n->left, max(n->val,v)});
            if (n->right != nullptr) q.push({n->right, max(n->val,v)});
        }
        return count;
    }
};