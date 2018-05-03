class Solution {
public:
    string reverseString(string s) {
        auto first = s.begin();
        auto last = s.end();
        while(first != last && first != --last){
            std::iter_swap (first,last);
            first ++;
        }
        return s;
    }
};


class Solution {
public:
    string reverseString(string s) {

        std::reverse(s.begin(), s.end());
        return s;
    }
};
