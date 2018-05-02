class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //reverse up and down
        std::reverse(matrix.begin(), matrix.end());
        //swap the symmetry
        for(int i=0; i< matrix.size(); i++){
            for(int j=i+1; j< matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);

            }
        }


    }
};
