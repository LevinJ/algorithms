class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //get row/col number, m,n
        int m = matrix.size();
        if(m==0) return;
        int n = matrix[0].size();
        //get a flag marking if first row/col contains zero
        bool first_row_zero = false;
        bool first_col_zero = false;
        for(int j=0; j<n;j++){
            if(matrix[0][j] == 0){
                first_row_zero = true;
                break;
            }
        }
        for(int i=0;i<m;i++){
            if(matrix[i][0] == 0){
                first_col_zero = true;
                break;
            }
        }
        //loop elements in the matrix excluding first row/col, mark if their row/cols contain zero by first row/col
        for(int i=1; i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        //loop elements in the matrix excluding first row/col, set zeros based on previous marking in first row/col
        for(int i=1; i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        //set first row/col based on the flag
        if(first_row_zero){
            for(int j=0;j<n;j++){
                matrix[0][j] = 0;
            }
        }
        if(first_col_zero){
            for(int i=0;i<m;i++){
                matrix[i][0] = 0;
            }
        }
    }
};
