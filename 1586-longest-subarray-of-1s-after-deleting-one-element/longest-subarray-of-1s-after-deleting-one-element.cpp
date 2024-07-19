class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int ans=0;
        bool flag=false;
        while(j<n){
            if(flag && nums[j]==0){
                while(nums[i]!= 0){
                    i++;
                }
                i++;
            }else if(!flag && nums[j]==0){
                flag=true;
            }
            ans=max(ans,j-i);
            j++;
        }
        return ans;
    }
};