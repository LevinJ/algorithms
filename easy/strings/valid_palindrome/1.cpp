class Solution {
public:
    bool isPalindrome(string s) {
        //std:string rmchs = " ,.:@";
        //for(const auto& c: rmchs){
            //s.erase(std::remove(s.begin(), s.end(), c),s.end());
        //}
        string temp;
        for(const auto& in : s){
            if(in <= 'Z' && in >= 'A'){
                temp +=  in - ('Z' - 'z');
            }else if(in <= 'z' && in >= 'a'){
                temp += in;
            }

        }
        s = temp;
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
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
