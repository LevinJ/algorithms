class Solution {
public:
     //create the map
    unordered_map<int, int> lookup;
    int climbStairs(int n) {
       //create the map
    	unordered_map<int, int> lookup;
    	//fill in the map with initial values for 0 and 1
    	lookup[1] = 1;
    	lookup[2] = 2;

    	//loop over 3, n+1
    	for(int i=3; i< n+1; i++){
    		//for each i, get counts for n-1 and n-2, add them toghter, save it to map[n]= map[n-1) and map[n-2]
    		lookup[i] = lookup[i-1] + lookup[i-2];
    	}
    	//return map[n]
    	return lookup[n];

    }
};


class Solution {
public:
     //create the map
    unordered_map<int, int> lookup;
    int climbStairs(int n) {
        //base case
        if(n<=2){
            //when n==1 or when n==2
            lookup[n] = n;
            return lookup[n];
        }
        if(lookup.find(n) != lookup.end()) return lookup[n];
        //return the value
        lookup[n] = climbStairs(n-1) + climbStairs(n-2);
        return lookup[n];

    }
};
