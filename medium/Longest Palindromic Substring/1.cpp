class Solution {
public:
    string longestPalindrome(string s) {
        //remove the noise, retain only number and alaphbetic, all lower case
        s = rmnoise(s);
        string res = "";
        //loop s from start to end
        for(int i=0; i<s.length();i++){
            //for each chracter c, find its palindromic substring
            //if its length is then current res, replace it
            auto temp = find_longest(s, i);
            if(temp.length() > res.length()){
                res = temp;
            }

        }

        //return result
        return res;

    }
private:
    bool is_valid(const string &s, int start, int end){
       while(start < end){
           if(s[start] != s[end]) return false;
           start ++;
           end--;
       }
        return true;
    }
    string find_longest(const string& s, int start){
        //loop s by i indexing, from end to start, check if s[start:i] is valid palindrone, if yes, return the substring
        for(int i=s.length()-1; i>=start; i--){
            if(is_valid(s, start, i)) return s.substr(start, i-start+1);
        }
        return "";
    }
    string rmnoise(const string &s){
        string res;
        for(const auto& c: s){
            if(isalnum(c)){
                res.push_back(std::tolower(c));
            }
        }
        return res;
    }
};
