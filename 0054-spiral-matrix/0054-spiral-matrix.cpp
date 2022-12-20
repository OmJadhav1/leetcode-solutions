class Solution
{
    public:
        vector<int> spiralOrder(vector<vector < int>> &matrix)
        {
            vector<int> ans;
            int n=matrix.size();
            int m=matrix[0].size();
            int sr = 0;
            int er = n - 1;
            int sc = 0;
            int ec = m - 1;

           	//outer loop (transverse array boundary)
            while (sc <= ec and sr <= er)
            {

               	//start row
                for (int col = sc; col <= ec; col++)
                {
                    ans.push_back(matrix[sr][col]);
                }
               	//end coloum
                for (int row = sr + 1; row <= er; row++)
                {
                    ans.push_back(matrix[row][ec]);
                }
               	//end row
                for (int col = ec - 1; col >= sc; col--)
                {
                    if (sr == er)
                    {
                        break;
                    }
                    ans.push_back(matrix[er][col]);
                }
               	//start column
                for (int row = er - 1; row >= sr + 1; row--)
                {
                    if (sc == ec)
                    {
                        break;
                    }
                    ans.push_back(matrix[row][sc]);
                }

                sr++;
                ec--;
                er--;
                sc++;
            }
            return ans;
        }
};