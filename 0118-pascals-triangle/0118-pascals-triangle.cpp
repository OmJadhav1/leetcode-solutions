class Solution
{
    public:
        vector<vector < int>> generate(int numRows)
        {
            vector<vector < int>> ans(numRows);
            vector<int> col(numRows);
            for (int i = 0; i < numRows; i++)
            {
                col[i] = i + 1;
            }

            for (int i = 0; i < numRows; i++)
            {
                int column = col[i];

                ans[i] = vector<int> (column);
                for (int j = 0; j < column; j++)
                {
                    ans[i][j] = j + 1;
                }
            }
            for (int i = 0; i < numRows; i++)
            {

                for (int j = 0; j <=i; j++)
                {
                    if (j == 0)
                    {
                        ans[i][j] = 1;
                    }
                    else if (j == i)
                    {
                        ans[i][j] = 1;
                    }
                    else
                    {
                        ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
                    }
                }
            }
            return ans;
        }
};