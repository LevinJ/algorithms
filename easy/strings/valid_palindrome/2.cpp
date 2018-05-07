class Solution {
public:
    bool isPalindrome(string s) {
        auto left = s.begin();
        auto right = prev(s.end());
        while(left < right){
           if(!isalnum(*left)){
               left++;
           }else if(!isalnum(*right)){
                right--;
            }else if (tolower(*left) != tolower(*right)){
                return false;
            }else{
               left++;
            right--;
           }


        }
        return true;
    }
};



class Solution {
public:
    bool isPalindrome(string s) {
        //initialze left and right pointer
        int left = 0;
        int right = s.length()-1;
        //do the loop while left < right
        while(left<right){
             //if left or right are not isalum, skip them,
            if(!isalnum(s[left])){
                left++;
            } else if (!isalnum(s[right])){
                right--;
            }else if(tolower(s[left]) != tolower(s[right])){
                //if left and right are not equal, return false
                return false;
            }else{
                 //next left/right
                left++;
                right--;
            }
        }
                       return true;




        //return true

    }
};



class Solution {
public:
    bool isPalindrome(string s) {
        s = rmnoise(s);
        unsigned int len = s.length();
        for(int i=0; i< len/2; i++){
            if (s[i] != s[len-1-i]){
                return false;
            }
        }
        return true;

    }
private:
    string rmnoise(string s){
        string temp;
        for(const auto& c: s){
            if(!isalnum(c)) continue;
            temp.push_back(tolower(c));
        }
        return temp;
    }
};
