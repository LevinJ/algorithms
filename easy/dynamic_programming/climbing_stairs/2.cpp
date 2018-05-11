class Solution {
public:
     //create the map
    unordered_map<int, int> lookup;
    int climbStairs(int n) {
       //if(n<=2), return n
    	if(n<=2) return n;
    	//fminus1 = 2, fmimus2 = 1
    	int fminus1 = 2;
    	int fminus2 = 1;

    	//initiate f_vaue
    	int f_value = 0;
    	//loop 3 to n+1, i
    	for(int i=3; i< n+1; i++){
    		//f_value
    		f_value = fminus1 + fminus2;
    		//preparte next iteration
    		fminus2 = fminus1;
    		fminus1 = f_value;
    	}

    	return f_value;

    }
};
