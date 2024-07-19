class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN, cal = 0;
        int n = nums.size();
        int i = 0, j = -1;

        while (j < n) {
            if (j - i + 1 != k) {
                j++;
                cal += nums[j];
            } else {
                ans = max(ans, cal / k);
                cal -=nums[i];
                i++;
                j++;
                if(j<n)
                    cal+=nums[j];
            }
        }
        return ans;
    }
};