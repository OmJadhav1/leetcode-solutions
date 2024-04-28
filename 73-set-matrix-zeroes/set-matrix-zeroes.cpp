class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int a= matrix.size();
        int b= matrix[0].size();
        vector<pair<int ,int>> zero;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(matrix[i][j] == 0){
                    pair<int, int> pair2 = make_pair(i, j);
                    zero.push_back(pair2);
                }
            }
        }
        int n=zero.size();
        for(int i=0;i<n;i++){
            int row = zero[i].first;
            int col = zero[i].second;
            for(int j=0;j<b;j++){
                matrix[row][j] =0;
            }
            for(int p=0;p<a;p++){
                matrix[p][col] = 0;
            }
        }
    }
};