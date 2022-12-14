class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans[count]=nums[i];
                count++;
            }
        }
        int cal=n-ans.size();
        for(int i=0;i<cal;i++){
            ans[count]=0;
            count++;
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
    }
};