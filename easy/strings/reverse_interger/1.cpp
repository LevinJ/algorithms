class Solution {
public:
    int reverse(int x) {
        long int res = 0;

        while(x){
            res = res*10 + x% 10;
            x = x/10;
        }

        if (res>std::numeric_limits<int>::max() || res < std::numeric_limits<int>::min()){
            res = 0;
        }
        return res;
    }
};
