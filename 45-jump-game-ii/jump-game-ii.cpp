class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0;
        int jumps=0,far=0;
        //if r< n-1 emans it is not there
        //but if it is at n-1 or beyond no need to 
        //calculate further
        while(r<n-1){
            far=0;
            for(int i=l;i<=r;i++){
                far = max(i+nums[i], far);
            }
            l=r+1;
            r=far;
            jumps++;
        }
        return jumps;
    }
};