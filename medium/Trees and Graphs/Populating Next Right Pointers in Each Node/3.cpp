class Solution {
public:
    void connect(TreeLinkNode *root) {
        //base case
        if(!root || !root->left) return;

        root->left->next = root->right;
        root->right->next = root->next? root->next->left : nullptr;

        connect(root->left);
        connect(root->right);

    }
}
