class Solution {
public:
    bool is_prime(int n){
        int up = sqrt(n);
        for(int i=2; i<=up; i++){
            if(n%i ==0){
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int count = 0;
        for(int i=2; i< n; i++){
            if(is_prime(i)){
                count++;
            }
        }
        return count;

    }
};
