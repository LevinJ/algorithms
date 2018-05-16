// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         //initialize start = 1, end = n
    	if(n<1) return -1;
    	int left = 1;
    	int right = n;

    	while(left<=right){
    		if(left==right) return right;
    		int mid = left + (right-left)/2;

    		if(isBadVersion(mid)){
    			right = mid;
    		}else{
    			left = mid+1;
    		}
    	}
    	return -1;

    }
};
