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
    vector<vector<int>> levelOrder(TreeNode* root) {
        //initialzie res as empty
    	vector<vector<int>>  res;
    	//push root into the  nodes
    	vector<TreeNode* > nodes;
    	nodes.emplace_back(root);
    	//loop nodes till it's empty
    	while(!nodes.empty()){
    		//move all nodes in nodes into temp_nodes
    		vector<TreeNode* > temp_nodes;
    		temp_nodes = std::move(nodes);
			//initialzie an empty vector
    		vector<int> temp_vec;
			//for each node in temp_nodes
    		for(auto& node: temp_nodes){
    			//if it's null, continue
    			if (node == nullptr) continue;
    			//push value to temp_vector, push its left and right nodes into nodes
    			temp_vec.emplace_back(node->val);

    			nodes.emplace_back(node->left);
    			nodes.emplace_back(node->right);
    		}
			// move temp_vector to result vector
            if(temp_vec.size() != 0){
                res.push_back(std::move(temp_vec));
            }


    	}
    	return res;
    }
};
