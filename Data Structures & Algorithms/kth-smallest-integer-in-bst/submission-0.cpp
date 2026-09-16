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
    void traversal(TreeNode* node, int& k, int& ans){
        if(k == 0) return;
        if(node -> left){
            traversal(node -> left, k, ans);
        }

        if(k == 1){
            ans = node -> val;
        }
        k = k - 1;
        
        if(node -> right){
            traversal(node -> right, k, ans);
        }

        
    }
    int kthSmallest(TreeNode* root, int k) {
        // just do inorder traversal..
        int ans = 0;
        int passK = k;
        traversal(root, passK, ans);

        return ans;
    }
};
