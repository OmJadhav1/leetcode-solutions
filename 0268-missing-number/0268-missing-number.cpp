class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //calculated total in range 0-n
        //and calculated sum of all numbers in array
        //their diff gives the remaining number
        int  total=0;
        int sum=0;
        for(int i=0;i<=nums.size();i++){
            total += i;
        }
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        int ans =total-sum;
        return ans;
    }
};