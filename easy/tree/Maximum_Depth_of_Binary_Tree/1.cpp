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
    int maxDepth(TreeNode* root) {
        //base case, when root is NUll, return 0
        if(root == nullptr) return 0;

        //left node, right node result, take the max
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        //return max + 1
        return 1 + max(left, right);

    }
};
