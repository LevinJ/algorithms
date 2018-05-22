class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //create empty result vector
    	vector<vector<int>> res;
    	//sort nums
    	std::sort(nums.begin(), nums.end());
    	//get nums length len
    	int len = nums.size();
    	//fix one value, loop i from 0 to len-3
    	for(int i=0; i<=len-3; i++){
    		//break if the fixed value is positve
    		if(nums[i] > 0) break;
			//continue if the fixed value is the same as last one
    		if(i!=0){
    			if(nums[i] == nums[i-1]) continue;
    		}
			//using two pointers to iterate the remaining array and find valid numbers, add it to res
    		int left = i+1;
    		int right = len-1;
    		int target = -nums[i];
    		while(left < right){
    			if(nums[left] + nums[right] > target){
    				right--;
    				continue;
    			}
    			if(nums[left] + nums[right] < target){
    				left++;
    				continue;
    			}
    			res.push_back({nums[i], nums[left], nums[right]});
    			//fitler identical left/right values
    			while(left<right && nums[left + 1] == nums[left]) left++;
    			while(left<right && nums[right-1] == nums[right]) right--;
    			//left and right both move forward
    			left ++;
    			right--;

    		}



    	}
    	return res;
    }





};
