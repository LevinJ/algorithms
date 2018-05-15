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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    	//base case,
    	return sortedArrayToBST_recursive(nums, 0, nums.size() - 1);
    }
    TreeNode* sortedArrayToBST_recursive(vector<int>& nums, int start, int end){
    	//base case
    	if(start > end) return NULL;
    	//get the midpoint
    	int mid = (start + end) / 2;
    	//tranform left side, return the tree
    	TreeNode* left = sortedArrayToBST_recursive(nums, start, mid -1);
    	//transform the right side, return the tree
    	TreeNode* right = sortedArrayToBST_recursive(nums, mid +1, end);
    	//add the new trees to midpoint
    	struct TreeNode *node = new TreeNode(nums[mid]);
    	node->left = left;
    	node->right = right;
    	//return the midpoint node
    	return node;
    }
};
