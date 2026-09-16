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

    void preOrder(TreeNode* node, int& cnt, int maxival){
        if(!node){
            return;
        }

        if(maxival <= node -> val){
            maxival = node -> val;
            cnt += 1;
        }

        preOrder(node -> left, cnt, maxival);
        preOrder(node -> right, cnt, maxival);
    }

    int goodNodes(TreeNode* root) {
        if(root == nullptr) return 0;

        int maxval = -1e9;
        int cnt = 0;
        preOrder(root, cnt, maxval);

        return cnt;
    }
};
