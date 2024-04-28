class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int ans=1,maxi=1;
        sort(nums.begin(), nums.end());
        int i=0,j=1;
        while(j<n){
            if(nums[j] == nums[j-1]+1){
                maxi++;
                ans = max(ans,maxi);
            }else if(nums[j] > nums[j-1]){
                maxi=1;
                ans = max(ans,maxi);
            }
            j++;
        }
        return ans;
    }
};