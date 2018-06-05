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
    int kthSmallest(TreeNode* root, int k) {
        auto cur = root;
        std::stack<TreeNode *> s;
        int rank = 0;

        while(cur || !s.empty()){
            if(cur){
                s.push(cur);
                cur = cur->left;
                continue;
            }

            cur = s.top();
            if(++rank == k) return cur->val;
            s.pop();
            cur = cur->right;
        }

        return std::numeric_limits<int>::min();
    }
};
