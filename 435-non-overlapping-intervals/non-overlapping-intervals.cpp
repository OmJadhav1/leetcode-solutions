class Solution {
public:
    static bool comp(vector<int> a, vector<int> b){
        // if( a[0]==b[0]){
        //     return a[1]-a[0]<b[1]-b[0];
        // }else{
        //     return a[0]<b[0];
        // }
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int ans=0;
        int l=intervals[0][0],r=INT_MIN;
        for(auto x:intervals){
            if(x[0]>=r)
                r=x[1];
            else
                ans++;
        }

        return ans;
    }
};