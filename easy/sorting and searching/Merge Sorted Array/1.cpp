class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //create result vector of size m+n
        vector<int> res(nums1.size(), 0);

        //initialize i,j,k to zero
        int i=0;
        int j=0;
        int k=0;
        //loop, while (i<m, j<n)
        while(i<m || j<n){
        	//if num1 reached the end
            if(i==m){
                res[k++] = nums2[j++];
                continue;
            }
            //if num2 reached the end
            if(j==n){
                res[k++] = nums1[i++];
                continue;
            }
            //if num1[i] <= num2[j], store num1[i], push num1 forward, otherwise push num2[j]
            if(nums1[i] < nums2[j]){
                res[k++] = nums1[i++];
            }else{
                res[k++] = nums2[j++];
            }

        }
        nums1 = std::move(res);
        //move nums1 = res

    }
};
