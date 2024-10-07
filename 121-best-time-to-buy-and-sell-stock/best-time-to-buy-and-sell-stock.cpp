class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprices=INT_MAX, ans=0,profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i] <minprices){
                minprices=prices[i];
            }else{
                profit = prices[i] - minprices;
            }
            ans=max(ans,profit);
        }
        return ans;
    }
};