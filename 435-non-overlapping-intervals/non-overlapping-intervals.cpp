class Solution {
public:
    static bool comp(vector<int> a, vector<int> b) { return a[1] < b[1]; }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        int ans = 0;
        int l = intervals[0][0], r = INT_MIN;
        for (auto x : intervals) {
            if (x[0] >= r)
                r = x[1];
            else
                ans++;
        }
        return ans;
    }
};