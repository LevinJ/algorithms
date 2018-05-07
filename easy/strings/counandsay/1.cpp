class Solution {
public:
    string str_gen(string str){
	//initialzie result res
	string res;
	//initialze count =1; cur_num = 0
	int count = 1;
	char cur_num = str[0];
	//loop throught the characters in str, from 0, to len(str)
	for(int i=1; i< str.length();i++){
		//if current character is the same as num, count++
		if(str[i] == cur_num){
			count ++;
		}else{
			//if current character is not the same as cur_num  push in information, contut =1, num=new character
			res += std::to_string(count);
			res.push_back(cur_num);
			count = 1;
			cur_num = str[i];

		}

	}


	res += std::to_string(count);
	res.push_back(cur_num);
	//outside the loop, return
	return res;
}

string countAndSay(int n) {
	//if n==1 , return "1"
	if(n==1){
		return "1";
	}
	// initialze str as "1"
	string res = "1";
	//loop from 2 to n+1, call the str_gen function n times,  with str as input
	for(int i=2; i < n+1; i++ ){
		res = str_gen(res);
		cout<<i<<": "<<res<<endl;
	}
	return res;

}
};
