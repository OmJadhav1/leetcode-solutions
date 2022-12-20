class Solution
{
    public:
        void rotate(vector<vector < int>> &matrix)
        {
            int n = matrix.size();
            vector<vector < int>> rotated(n, vector<int> (n, 0));
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    rotated[j][n - i - 1] = matrix[i][j];
                }
            }
            matrix = rotated;
        }
};
//Brute force
/*Take another dummy matrix of n*n, and then take the first row of the matrix and put it in the last column of the dummy matrix, take the second row of the matrix, and put it in the second last column of the matrix and so.*/
