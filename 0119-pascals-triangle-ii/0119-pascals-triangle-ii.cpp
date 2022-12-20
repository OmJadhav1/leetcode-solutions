class Solution
{
    public:
        vector<int> getRow(int rowIndex)
        {
            vector<vector < int>> ans(rowIndex+1);
            for (int i = 0; i < rowIndex+1; i++)
            {
                ans[i].resize(i + 1);
                for (int j = 0; j <= i; j++)
                {
                    if (j == 0 || j == i)
                    {
                        ans[i][j] = 1;
                    }
                    else
                    {
                        ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
                    }
                }
            }
            int n=ans[rowIndex].size();
            vector<int> ans2(n);
            for(int i=0;i<n;i++){
                ans2[i]=ans[rowIndex][i];
            }
            return ans2;
        }
};