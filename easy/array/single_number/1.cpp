class Solution {
public:
    int singleNumber(vector<int>& nums) {
    unordered_map<int, bool> temp_map;
	//iterate over the nums
	for(auto num : nums){
		auto temp_it = temp_map.find(num);
		//if map value is two, delete the time
		if(temp_it != temp_map.end()){
			temp_map.erase(temp_it);
			continue;
		}
		//insert the num to temp_map
		temp_map[num] = true;
	}
	//return the first element in map
	for (auto& x: temp_map) {
		return x.first;
	}

    }
};
