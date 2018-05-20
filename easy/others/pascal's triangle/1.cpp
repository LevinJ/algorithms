class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        generate_r(numRows, res);
        return res;
    }

    void generate_r(int numRows, vector<vector<int>> & res){
        //base case
        if(numRows==0){
            return;
        }
        if(numRows==1){
            res.push_back({1});
            return;
        }
        //generate for its subtask
        generate_r(numRows -1, res);
        //create temp vec
        vector<int> temp;
        //fill in 1
        temp.emplace_back(1);
        //fill in new elements based on last row
        auto last_row = res[res.size()-1];
        for(int i=0; i< last_row.size()-1; i++){
            temp.emplace_back(last_row[i] + last_row[i+1]);
        }
        //fill in 1
        temp.emplace_back(1);
        //move temp to res
        res.push_back(move(temp));
        //done
        return;
    }
};
