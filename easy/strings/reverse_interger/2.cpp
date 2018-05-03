class Solution {
public:
    int reverse(int x) {
        int res = 0;

        while(x){
            auto prev = res;
            res = res*10 + x% 10;
            if (res / 10 != prev) {
                res = 0;
                break;
            }
            x = x/10;
        }

        return res;
    }
};
