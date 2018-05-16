// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
          //initialize start = 1, end = n
    	int start = 1;
    	int end = n;
    	//if the first one is true, and return n
    	if(isBadVersion(start)) return 1;
    	//if the last one is false, then return 0
    	if(!isBadVersion(end)) return 0;
    	//while loop, start<=n
    	while(start <= end){

    		//find midpoint = (start + end)/2
    		int midpoint = start + ( end - start)/2;
    		if(isBadVersion(midpoint)){
    			//if midpoint is true, search from start, midpoint
                //if start==end, return end
                if(start == end){
                    return end;
                }
    			end = midpoint;
    		}else{
    			//if midpoint is false, search from midpoint+1, end
    			start = midpoint + 1;
    		}
    	}

    	return 0;

    }
};
