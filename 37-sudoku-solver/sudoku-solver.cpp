class Solution {
public:
    bool issafe(int i, int j, vector<vector<char>>& board, char x) {
        for (int y = 0; y < 9; y++) {
            if (board[y][j] == x) {
                return false;
            }
            if (board[i][y] == x) {
                return false;
            }
            if (board[3 * (i / 3) + y / 3][3 * (j / 3) + y % 3] == x) {
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (char x = '1'; x <= '9'; x++) {
                        if (issafe(i, j, board, x)) {
                            board[i][j] = x;

                            bool solvenext = solve(board);
                            if (solvenext) {
                                return true;
                            } else {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) { solve(board); }
};