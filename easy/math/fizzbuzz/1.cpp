class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for(int i=1; i<n+1; i++){
            string temp;
            if(i % 3 ==0){
                temp = "Fizz";
            }
            if(i %5 == 0){
                temp += "Buzz";
            }
            if(temp.empty()){
                temp = to_string(i);
            }
            res.push_back(move(temp));
        }

        return res;
    }
};
