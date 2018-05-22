class Solution {
public:
    bool isValid(string s) {
        //if s's length is odd, return false
        int n = s.length();
        if(n%2 !=0 ) return false;

        //creat stack stack_s;
        stack<char> stack_s;

        //loop string s, i from 0 to s.length
        for(int i=0;i<n; i++){
            //for each i, if s[i] is one of '(', '[]', '{', push it to stack stack_s, continue
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stack_s.push(s[i]);
                continue;
            }
            //see if we can find its counter part, if not, return false
            if(stack_s.empty()) return false;
            if(s[i] == ')' ){
                if(stack_s.top() != '(') return false;
            }else if(s[i] == ']' ){
                if(stack_s.top() != '[') return false;
            }else if(s[i] == '}' ){
                if(stack_s.top() != '{') return false;
            }else{
                return false;
            }
            //pop out the its counter part
            stack_s.pop();
        }

        //outside loop, check if the length of the stack is empty, if not, return false
        if(!stack_s.empty()) return false;
        return true;

    }
};
