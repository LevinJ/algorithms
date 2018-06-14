class Solution {
private:
    int dp(vector<int>& coins, int amount, vector<int>& counts){
        if(amount < 0) return -1;
        if(amount ==0) return 0;
        if(counts[amount-1] !=0) return counts[amount -1];

        int res = numeric_limits<int>::max();

        for(const auto& coin:coins){
            int count = dp(coins, amount-coin, counts);
            if(count!=-1 && (count+1) < res){
                res = count + 1;
            }
        }

        counts[amount-1] = (res==numeric_limits<int>::max())? -1: res;
        return counts[amount-1];
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> counts(amount,0);
        return dp(coins, amount, counts);
    }
};
