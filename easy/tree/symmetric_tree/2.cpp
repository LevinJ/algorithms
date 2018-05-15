class Solution {
public:
   bool isSymmetric(TreeNode* root) {
		 // if root is empty , return true
		 if(root == nullptr) return true;
		 //stack store initial left and right
		 stack<TreeNode*> nodes;
		 nodes.emplace(root->left);
		 nodes.emplace(root->right);

		 //loop nodes, till it's empty
		 while(!nodes.empty()){
			 //take out left and right node
			 auto right = nodes.top();
			 nodes.pop();

			 auto left = nodes.top();
			 nodes.pop();
			 //if both nodes are emtpy, continue
			 if(!left && !right) continue;
			 //if only one of them is empty, return false
			 if((!left && right) || (left && !right)) return false;
			 //if left and right value not equal , return false
			 if(left->val != right->val) return false;
			 //store left right, right left, and left/left, right/right pair
			nodes.emplace(left->right);
			nodes.emplace(right->left);
			nodes.emplace(left->left);
			nodes.emplace(right->right);


		 }

	    return true;

	 }
};
