class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int cur_max = 0;
	int total_max = 0;

	if(prices.size() < 2){
		return 0;
	}
	for(int i=1; i< prices.size(); i++){
		cur_max = cur_max + prices[i] - prices[i-1];
		cur_max = max(0, cur_max);
		total_max = max(cur_max, total_max);
	}
	return total_max;
    }
};
