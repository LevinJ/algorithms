bool containsDuplicate(vector<int>& nums) {
	if (nums.size()<=1){
		return false;
	}
	set<int> temp_set;
	for(std::size_t i=0; i<= nums.size()-1; i++){
		const bool is_in = temp_set.find(nums[i]) != temp_set.end();
		if(is_in){
			return true;
		}else{
			temp_set.insert(nums[i]);
		}

	}
	return false;
}
