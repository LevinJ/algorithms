class Solution {
public:
    void connect(TreeLinkNode *root) {
        //base case
        if(!root || !root->left) return;

        auto cur = root;
        while(cur){
            cur->left->next = cur->right;
            cur->right->next = cur->next? cur->next->left : nullptr;
            cur = cur->next;
        }
        connect(root->left);
    }
};
