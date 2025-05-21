//Set Matrix Zeroes

/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int m=matrix.size();
       int n=matrix[0].size();
       vector<pair<int,int>>ans;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                ans.push_back({i,j});
            }
        }
       } 
       for(int i=0;i<ans.size();i++){
        int r=ans[i].first;
        int c=ans[i].second;
        for(int j=0;j<m;j++){
            matrix[j][c]=0;
        }
        for(int k=0;k<n;k++){
            matrix[r][k]=0;
        }
       }
    }
};
