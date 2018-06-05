class Solution {
private:
    void set_zeros(vector<vector<char>>& grid, int i, int j){
        grid[i][j] = '0';
        int m = grid.size();
        int n= grid[0].size();

        if(i-1 >=0 && grid[i-1][j] == '1') {
            set_zeros(grid, i-1, j);
        }
        if(i+1 < m && grid[i+1][j] == '1') {
            set_zeros(grid, i+1, j);
        }

        if(j-1>=0 && grid[i][j-1] == '1'){
            set_zeros(grid, i,j-1);
        }

        if(j+1 < n && grid[i][j+1] == '1'){
            set_zeros(grid, i,j+1);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
       int res = 0;
        int m = grid.size();
        if(m==0) return 0;
        int n= grid[0].size();
        for(int i=0; i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '0') continue;
                res++;
                set_zeros(grid, i,j);
            }
        }
        return res;

    }
};
