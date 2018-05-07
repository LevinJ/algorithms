class Solution {
public:
    string get_next(const string &s){
	string res;
	for(auto i=s.cbegin();i<s.cend();){
		auto j = std::find_if(i, s.cend(), bind1st(not_equal_to<char>(), *i));
		auto count = std::to_string(std::distance(i, j));
		res.append(count);
		res.push_back(*i);
		i = j;
	}
	return res;
}

string countAndSay(int n) {
	string res = "1";
	for(int i=0; i< n-1; i++){
		res = get_next(res);
		cout<<i<<": "<< res << endl;
	}
	return res;
}

};
