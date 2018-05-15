class Solution {
public:
   bool isSymmetric(TreeNode* root) {
		 //if root is null, return true
		 if(root==nullptr) return true;
		 return isSymmetricHelper(root->left, root->right);
	    }
	 bool isSymmetricHelper(TreeNode *left, TreeNode *right){
		 //base case
		 //if both left and right are empty, true
		 if(!left && !right) return true;
		 //if only one of them is empty
		 if((left && !right) || (!left && right)) return false;
		 //check left and righ value
		 if(left->val != right->val) return false;
		 //check substree symmetry
		 if(isSymmetricHelper(left->left, right->right) && isSymmetricHelper(left->right, right->left)){
			 return true;
		 }else{
			 return false;
		 }
	 }
};
