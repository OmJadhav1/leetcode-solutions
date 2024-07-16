class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int pre=0,ans=INT_MIN;        
        for(int i=0;i<n;i++){
            pre +=nums[i];
            if(pre<0){
                if(pre>ans){
                    ans=pre;
                }
                pre=0;
            }else
                ans = max(ans,pre);
        }
        return ans;
    }
};