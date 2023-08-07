class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minpri,profit,ans;
        minpri=INT_MAX;
        profit=ans=0;
        for(int i=0;i<n;i++){
            minpri=min(minpri,prices[i]);            
            profit=prices[i]-minpri;
            ans=max(profit,ans);
        }
        return ans;
    }
};