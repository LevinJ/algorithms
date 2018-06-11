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
private:
    void recur(TreeNode *root, vector<int> &vec){
        //base case
        if(!root) return;
        recur(root->left, vec);
        vec.emplace_back(root->val);
        recur(root->right, vec);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        recur(root, res);
        return res;
    }
};
