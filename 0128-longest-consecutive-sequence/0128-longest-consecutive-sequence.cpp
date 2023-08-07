class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count,ans;
        count=ans=0;
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1] == 1){
                count++;
                ans=max(count+1,ans);
            }else if(nums[i]-nums[i-1] == 0){
                continue;
            }
            else{
                count=0;
            }
        }
        if(n==0){
            ans=0;
        }else if(ans==0){
            ans=1;
        }
        
        return ans;
    }
};