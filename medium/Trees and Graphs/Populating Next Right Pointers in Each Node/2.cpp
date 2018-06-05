class Solution {
public:
    void connect(TreeLinkNode *root) {
        while(1){
            if(!root || !root->left) return;

            auto cur = root;
            while(cur){
                cur->left->next = cur->right;
                cur->right->next = cur->next? cur->next->left : nullptr;
                cur = cur->next;
            }
            root = root->left;
        }

    }
};
