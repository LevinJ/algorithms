// Time:  O(n)
// Space: O(1)

class Solution {
public:
    string reverseString(string s) {

       for(int i=0,j=s.size()-1; i<j; i++, j--){
           std:swap(s[i], s[j]);
       }
        return s;
    }
};


class Solution {
public:
    string reverseString(string s) {
        int len = s.size();
        for (int i=0; i<len/2; i++) {
           char ch = s[i];
           s[i] = s[len-i-1];
           s[len-i-1] = ch;
        }
        return s;
    }
};
