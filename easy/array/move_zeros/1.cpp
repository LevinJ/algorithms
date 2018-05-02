class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //retrun if nums size is less than or equal to 1
        if(nums.size() <=1) return;

        auto res = nums.begin();
        auto cur = res;

        while(cur != nums.end()){
            if(*cur!=0){
                std::swap(*cur, *res);
                res++;
            }
            cur++;
        }
    }
};
