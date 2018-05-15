class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int> vec;
        inorder_tranverse(root, vec);

        if(vec.size() <=1) return true;
        for(int i=1; i<vec.size();i++){
            if(vec[i] <= vec[i-1]) return false;
        }
        return true;
    }
    void inorder_tranverse(TreeNode* root, vector<int> &vec){
        //base case
        if(root == nullptr) return;
        inorder_tranverse(root->left, vec);
        vec.emplace_back(root->val);
        inorder_tranverse(root->right, vec);
    }
};
