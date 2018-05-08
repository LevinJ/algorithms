class Solution {
public:
    void deleteNode(ListNode* node) {
        if(!node || node->next == NULL) return;
        auto node_to_delete = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete node_to_delete;
        
    }
};