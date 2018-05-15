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
     bool isValidBST_recursive(TreeNode* root, long min_val, long max_val){
    	//base case, null, return true
    	if(root == NULL) return true;

    	//if left and right subtree are valid and also current is within limit, return true
    	//otherwise return false
    	if(root->val > min_val && root->val < max_val
    			&& isValidBST_recursive(root->left, min_val, root->val)
    	&& isValidBST_recursive(root->right, root->val, max_val)){
    		return true;
    	}
    	return false;
    }
    bool isValidBST(TreeNode* root) {
       return isValidBST_recursive(root, numeric_limits<long>::min(), numeric_limits<long>::max());

    }
};
