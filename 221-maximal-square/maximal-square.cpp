class Solution {
public:
    int solve(vector<vector<char>>& matrix, vector<vector<int>>& dp, int row,
              int col, int m, int n) {
        if (row >= m || col >= n)
            return 0;

        if (dp[row][col] != -1)
            return dp[row][col];

        dp[row][col] = 0;
        if (matrix[row][col] == '1') {
            int down = solve(matrix, dp, row + 1, col, m, n);
            int right = solve(matrix, dp, row, col + 1, m, n);
            int dig = solve(matrix, dp, row + 1, col + 1, m, n);

            dp[row][col] = 1 + min({dig,right,down});
        }

        return dp[row][col];
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if(matrix[i][j] == '1')
                    solve(matrix, dp, i, j, m, n);
            }
        }
        int ans = 0;
        for (auto x : dp) {
            for (auto y : x) {
                ans = max(ans, y);
            }
        }
        return pow(ans, 2);
    }
};