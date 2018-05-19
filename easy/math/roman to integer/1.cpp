class Solution {
public:
    int romanToInt(string s) {
        //initialize the lookup table
        unordered_map<char, int> lookup;
        lookup['I'] = 1;
        lookup['V'] = 5;
        lookup['X'] = 10;
        lookup['L'] = 50;
        lookup['C'] = 100;
        lookup['D'] = 500;
        lookup['M'] = 1000;

        //inititalze the final result int res = 0
        int res = 0;

        //loop the string s, from 0, to s.length -1.
        for(int i=0; i< s.length(); i++){
            //if it's the last character, add it direclty to res
            if(i == s.length()-1){
                res += lookup[s[i]];
            }else{
                //otherwise check if it's less than its next character
                if(lookup[s[i]] < lookup[s[i+1]]){
                    //if yes, add minus sign to it, and then add it to res
                    res += -lookup[s[i]];
                }else{
                    //if no, add it to res
                    res += lookup[s[i]];
                }

            }
        }

        return res;

    }
};
