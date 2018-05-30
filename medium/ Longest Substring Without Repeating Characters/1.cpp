class Solution {
private:
	int cal_count(const string &s, int &start){
		//create an empty hashtable ht
		unordered_map<char, int> ht;
		//loop s from start to end
		for(int i=start; i< s.length();i++){
			//if c is not in hashtable, insert (c, i), add 1 to start, continue
			if(ht.find(s[i]) == ht.end()){
				ht[s[i]] = i;
				start += 1;
				continue;
			}
			//otherwise, reassign start, break;
			start = ht[s[i]] + 1;
			break;
		}

		//return the count of hashtable
		return ht.size();

	}
public:
    int lengthOfLongestSubstring(string s) {
    	//move pointer from start to end, and record the biggest count
    	int res =0;
    	int start =0;

    	while(start < s.length()){
    		int cnt = cal_count(s, start);
    		if(cnt > res){
    			res = cnt;
    		}
    	}
    	return res;
    }
};
