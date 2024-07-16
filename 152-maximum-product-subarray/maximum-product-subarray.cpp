class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double n=nums.size();
        double ans=INT_MIN,pre=1;
        //if there are even no of neg numbers
        //then ans will come from traversing through
        //right to left no need to go from left to right
        //as it will give same ans
        for(int i=0;i<n;i++){
            pre*=nums[i];
            ans=max(ans,pre);
            if(pre==0)
                pre=1;
        }
        //reset pre
        pre=1;
        //but if there are odd no of neg no
        //then we have to checkfrom left to right also 
        for(int i=n-1;i>=0;i--){
            pre*=nums[i];
            ans=max(ans,pre);
            if(pre==0)
                pre=1;
        }
        return ans;

    }
};