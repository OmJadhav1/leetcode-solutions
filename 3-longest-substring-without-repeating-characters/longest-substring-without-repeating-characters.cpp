class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            int i = 0, j = 0, ans = 0;
            unordered_map<int, int> m;
            int n = s.size();

            while (j < n)
            {
                m[s[j]]++;
                if (m.size() != (j - i + 1))
                {
                    while (m.size() != j - i + 1)
                    {
                        m[s[i]]--;
                        if (m[s[i]] == 0)
                        {
                            m.erase(s[i]);	// Remove the char from map if its frequency drops to 0
                        }
                        i++;
                    }
                }
                if ((j - i + 1) == m.size())
                {
                    ans = max(ans, (j - i + 1));
                }
                j++;
            }
            return ans;
        }
};