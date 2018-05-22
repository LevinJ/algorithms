class Solution {
public:
    bool isValid(string s) {
       //create an empty stack parentheses
        stack<char> stacker;
        // create character mapping
        unordered_map<char, char> mapping= {{')','('},
                                     {']','['},
                                     {'}','{'}};

        //loop over each character c in s
        for(const auto &c: s){
            //if the character c is can't be found map key, push it to stack,and continue
            if(mapping.find(c) == mapping.end()){
                stacker.emplace(c);
                continue;
            }
            //if stack is empty,return false
            if(stacker.empty()) return false;
            //if stack top and mapped value is not equal , return false
            if(stacker.top() != mapping[c]) return false;
            //pop out the c's counterpart
            stacker.pop();
        }
         //if stack is not empty, return false
        if(!stacker.empty()) return false;
        return true;
    }
};
