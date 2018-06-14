class Solution {

public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> counts(amount+1, 0);

        for(int i=1; i<=amount; i++){
        	int res = numeric_limits<int>::max();

        	for(const auto& coin:coins){
        		int cnt = -1;
        		if(i-coin >=0){
        			cnt = counts[i-coin];
        		}
        		if(cnt!= -1 && (cnt+1) < res){
        			res = cnt + 1;
        		}
        	}

        	counts[i] = (res == numeric_limits<int>::max())? -1: res;
        }

        return counts[amount];
    }
};
