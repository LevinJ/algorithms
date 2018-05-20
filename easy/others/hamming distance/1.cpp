class Solution {
public:
    int hammingDistance(int x, int y) {
        int temp = x ^ y;
        int count =0;
        while(temp>0){
            if(temp&1){
                count ++;
            }
            temp >>= 1;
        }
        return count;
    }
};
