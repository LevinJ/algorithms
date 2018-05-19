class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
      if(s_.empty()){
          s_.emplace(0);
          min_val_ = x;
      }else{
          s_.emplace(static_cast<int64_t>(x) - min_val_);
          if(x < min_val_){
              min_val_ = x;
          }
      }
    }

    void pop() {
       auto diff = s_.top();
        //if diff >0, pop the item
        s_.pop();
        if(diff< 0){
            //if diff <0, pop the item, update the min_val
            min_val_ = min_val_ - diff;
        }


    }

    int top() {
        auto diff = s_.top();
        if(diff > 0){
            return diff + min_val_;
        }
        return min_val_;

    }

    int getMin() {
      return min_val_;
    }
private:
    stack<int64_t> s_;
    int64_t min_val_;


};
