class Solution {
public:
    static bool comparator(const vector<int> &a, const vector<int> &b) {
        return a[1] < b[1]; 
    }


    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;
        sort(intervals.begin(), intervals.end(), comparator);

        int cnt=1; 
        int n=intervals.size();
        int lastEndTime=intervals[0][1];
        for(int i=1; i<n; i++){
            if(intervals[i][0]>=lastEndTime){
                cnt++;
                lastEndTime=intervals[i][1];
            }
        }
        return n-cnt;
    }
};