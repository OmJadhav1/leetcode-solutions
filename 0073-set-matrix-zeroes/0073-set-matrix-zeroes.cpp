class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zeros;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    zeros.push_back({i,j});
                }
            }
        }
        int n=zeros.size();
        for(int i=0;i<n;i++){
            int first=zeros[i].first;
            int second=zeros[i].second;
            for(int j=0;j<col;j++){
                matrix[first][j]=0;
            }
            for(int k=0;k<row;k++){
                matrix[k][second]=0;
            }
        }
    }
};