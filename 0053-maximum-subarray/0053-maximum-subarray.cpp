class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cs=0;
        //to handle the first element edge case ms =nums[0];
        int ms=nums[0];
        for(int i=0;i<n;i++){
            cs +=nums[i];
            //here we are updating ms before making cs=0 cause of negative number
            ms=max(cs,ms);
            if(cs<0){
                cs=0;
            }
            
        }
        return ms;
    }
};