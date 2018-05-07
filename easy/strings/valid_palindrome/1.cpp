class Solution {
public:
    bool isPalindrome(string s) {
       string temp;
        for(const auto& c : s){
           if(!isalnum(c)){
               continue;
           }
            temp += tolower(c);
        }
        s = temp;
        auto first = s.begin();
        auto last = s.end();
        while(first!= last && first !=  --last){
            if(*first != *last){
                return false;
            }
            first++;
        }
        return true;
    }
};
