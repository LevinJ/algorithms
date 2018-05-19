struct Node{
    Node(int v, struct Node * n, int m): val(v), next(n), min_val(m) {

    }
    int val;
    struct Node * next;
    int min_val;
};

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        head = NULL;
    }

    void push(int x) {
      //if it's the first element, set it has the head
        if(head == NULL){
            head = new Node(x, head, x);
        }else{
            //if it's not the first element, set the new one as head
            head = new Node(x, head, min(x, head->min_val));
        }
    }

    void pop() {

        auto to_delete = head;
        head = head->next;
        delete to_delete;
    }

    int top() {
       return head->val;
    }

    int getMin() {
        return head->min_val;
    }
private:
    struct Node * head;

};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
