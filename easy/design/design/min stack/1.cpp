class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        s_data_.push(x);
        //if x is less than or equal to the top of s_min, push it to s_min
        if(s_min_.empty()){
            s_min_.push(x);
            return;
        }
        if(x<= s_min_.top()){
            s_min_.push(x);
        }
    }

    void pop() {
        int top_val = s_data_.top();
        s_data_.pop();

        if(top_val == s_min_.top()){
            s_min_.pop();
        }

    }

    int top() {
        return s_data_.top();
    }

    int getMin() {
        return s_min_.top();
    }
private:
    stack<int> s_data_,s_min_;

};
