class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //create empty res
        vector<vector<int>> res;
        //if numRows < 1, return res
        if(numRows < 1){return res;}
        //push_back {1}
        res.push_back({1});
        //loop i, from 2, to numRows
        for(int i=2; i< numRows + 1; i++){
            //for each i, create a temp
            vector<int> temp;
            //fill in  1
            temp.emplace_back(1);
            //fill in new elments based on last row
            auto last_row = res[res.size()-1];
            for(int i=0; i< last_row.size()-1; i++){
                temp.emplace_back(last_row[i] + last_row[i+1]);
            }
            //fill in 1
             temp.emplace_back(1);
            //move temp to res
            res.push_back(move(temp));
        }

        return res;
    }
};
