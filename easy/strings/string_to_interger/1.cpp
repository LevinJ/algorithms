class Solution {
public:
    void get_sign_numstr(string str, int &sign, string &numstr){
	sign = 0;
	enum Check_State { white_sapce_state,  digit_state, exit_state };
	Check_State state = white_sapce_state;
	for(const auto& c : str){
		switch(state){
		case white_sapce_state:
			if(c==' '){
				break;
			}
			if(c == '-' ){
				sign = -1;
				state = digit_state;
				break;
			}else if(c == '+' ){
                sign = 1;
				state = digit_state;
				break;
            }else if(isdigit(c)){
				sign = 1;
				numstr.push_back(c);
				state = digit_state;
				break;

			}else{
				sign = 0;
				state = exit_state;
				break;
			}
			break;
		case digit_state:
			if(!isdigit(c)){
				state = exit_state;
				break;
			}
			numstr.push_back(c);
			break;
		default:
			break;

		}//end of switchs
		if(state == exit_state){
			break;
		}
	}

	if(numstr.length()==0){
		sign = 0;
	}
}

int myAtoi(string str) {
	int sign;
	string numstr;
	get_sign_numstr(str, sign, numstr);
	if(sign ==0){
		return 0;
	}
	//get the number
	int res = 0;
	while(!numstr.empty()){
		//take first digit
		char val_char = numstr[0];
		//get first digit value
		int digit = val_char - '0';

		//accumulate result
		int prev = res;
		res = res * 10 + digit;

		//check if num exceed limit
		if(res/10 != prev){
			if(sign>0) return INT_MAX;
            return INT_MIN;
		}


		//remove first digit from numstr
		numstr.erase(0,1);
	}
	//get the final result
	return sign * res;

}

};
