class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxjump=0;
        int i=0;
        while(maxjump<n-1 && i<n){
            if(i>maxjump){
                break;
            }
            maxjump = max(maxjump, nums[i]+i);
            i++;
        }
        if(maxjump>=n-1)
            return true;
        else
            return false;
    }
};