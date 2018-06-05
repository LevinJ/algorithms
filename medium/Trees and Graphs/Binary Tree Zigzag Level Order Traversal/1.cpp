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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        vector<TreeNode*> s;

        if(!root) return res;
        s.push_back(root);
        bool right_flag = false;

        while(!s.empty()){
            vector<TreeNode *> s_temp;
            vector<int> res_temp;
            s_temp = move(s);
            s.clear();


            for(auto& n:s_temp){
                res_temp.push_back(n->val);
                if(n->left) s.push_back(n->left);
                if(n->right) s.push_back(n->right);
            }
            if(right_flag){
                std::reverse(res_temp.begin(), res_temp.end());
            }
            right_flag = !right_flag;
            res.push_back(move(res_temp));
        }
        return res;
    }
};
