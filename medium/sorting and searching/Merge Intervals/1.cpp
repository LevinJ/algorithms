/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {

public:
    vector<Interval> merge(vector<Interval>& intervals) {
        if(intervals.empty()){
            return intervals;
        }

        sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b){
            return a.start<b.start;
        });

        vector<Interval> res = {intervals[0]};
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i].start <= res.back().end){
                res.back().end = max(res.back().end, intervals[i].end);
            }else{
                res.emplace_back(intervals[i]);
            }
        }
        return res;

    }
};
