class Solution {
private:
    void recur(int l, int r, string tmp, vector<string> &res){
        if(l<0 || r<0){
            return;
        }
        if(r<l) return;

        if(l==0 && r==0){
            return res.push_back(tmp);
        }

        recur(l-1, r, tmp + "(", res);
        recur(l, r-1, tmp+ ")", res);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;

        recur(n, n, "", res);

        return res;
    }
};
