class Solution
{
    public:
        int singleNonDuplicate(vector<int> &nums)
        {
            int n = nums.size();
            int start = 0;
            int end = n - 1;
            if (n == 1)
            {
                return nums[0];
            }
            int mid = (start + end) / 2;
            while (start < end)
            {
                if(mid%2 ==0 ){
                    mid--;
                }
                if(nums[mid] != nums[mid+1]){
                    start=mid+1;
                }else {
                    end=mid-1;
                }
                    
                mid = (start + end) / 2;
            }
            return nums[start];
        }
};