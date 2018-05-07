class Solution {
public:
    int strStr(string haystack, string needle) {
        //if needle is empty, return 0
        int haystack_len = haystack.length();
        int needle_len = needle.length();
        if(needle.empty()){
            return 0;
        }
        //if needle is longer than haystack , return -1
        if(needle_len > haystack_len){
            return -1;
        }
        //loop haystack, from 0 to len(haystack) - len(needle) + 1

        for(int i=0; i<haystack_len-needle_len+1;i++ ){
            //get substring, i, len(needle)
            string substr = haystack.substr(i, needle_len);
            //compare sub str and needle, if found match, return i
            bool issame = substr == needle;
            if(issame){
                return i;
            }

        }
        return -1;
    }
};
