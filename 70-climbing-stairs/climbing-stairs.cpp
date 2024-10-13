class Solution {
public:
//this is in same pattern of fibo series
int cal(int n,vector<int> &ans){
    if(n==0||n==1)
        return ans[n] =1;
    
    if(ans[n] == -1)
        ans[n] = cal(n-1,ans) + cal(n-2,ans);
    
        return ans[n];
}
    int climbStairs(int n) {
        vector<int> ans(n+1,-1);
        cal(n,ans);
         return ans[n];
    }

};