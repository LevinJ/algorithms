class Solution {
public:
    int myAtoi(string str) {
	//initialize sign=1, res = 0;
	int sign = 1;
	int res = 0;
	//remove space
	unsigned int i = 0;
	for(; isspace(str[i]); i++){
		;
	}
	//check if remaining str is valid
	if(i > str.length()-1){
		return 0;
	}

	//assign sign
	if(str[i] == '+'){
		sign = 1;
		i++;
	}else if(str[i] == '-'){
		sign = -1;
		i++;
	}


	//enumurate remaining charaters till the last one or nondigit
	for(;i<str.length() && isdigit(str[i]); i++){
		//get value of the digit
		int digit = str[i] - '0';
		int prev = res;
		//add current digit to res 10 * res + digit
		res = res*10 + digit;
		//check if current res exceed limit
		if(res/10 != prev){
			return sign>0? std::numeric_limits<int>::max() : std::numeric_limits<int>::min();
		}

	}
	//return final result
	return sign * res;

}

};
