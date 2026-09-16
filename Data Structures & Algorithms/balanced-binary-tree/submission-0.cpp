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
    int height(TreeNode* node, bool& ans) {
        if (!node) return 0;
        int lh = height(node->left, ans);
        int rh = height(node->right, ans);
        ans = ans && (abs(lh -rh) <= 1);
        return 1 + max(lh, rh);
    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        height(root, ans);
        return ans;
    }
};
