class Solution
{
    public:
        int longestOnes(vector<int> &nums, int k)
        {
            unordered_map<int, int> m;
            int n = nums.size();
            int i = 0, j = 0;
            int ans = 0, chances = 0;
            m[0]=0;
            m[1]=0;
            while (j < n)
            {

                m[nums[j]]++;
                if (m[0] <= k)
                {

                    ans = max(ans, j - i + 1);
                }
                if (m[0] > k)
                {
                    while (m[0] != k)
                    {
                        m[nums[i]]--;
                        i++;
                    }
                }
                j++;
            }
            return ans;
        }
};