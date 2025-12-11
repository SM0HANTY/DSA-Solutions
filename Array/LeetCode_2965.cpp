//Find Missing and Repeated Values
/*You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.*/


//1st approach
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> ans1;
        vector<int> ans;
        for (auto row : grid) {
            for (int num : row) {
                ans1[num]++;
            }
        }
        for (int i = 1; i <= n * n; i++) {
            if (ans1[i]==0) { 
                ans.push_back(i);
            } else if (ans1[i] == 2) {  
                ans.push_back(i);
            }
        }
        return ans;
    }
};


//2nd approach
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
     vector<int>ans;
     vector<int>ans1;
     int n=grid.size();
     int m=grid[0].size();
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans.push_back(grid[i][j]);
        }
     } 
     sort(ans.begin(),ans.end());
     int a=ans.size();
     int rep=0,mis=0;
     int c=1;
     for(int i=0;i<a-1;i++){
        if(ans[i]==ans[i+1]){
            rep=ans[i];
            break;
        }
     }
     for(int i=0;i<a;i++){
        if(c==ans[i]){
            c++;
        }else if(ans[i]>c){
            mis=c;
            break;
        }
     }  
     if(mis==0)mis=n*m;
     ans1.push_back(rep);
     ans1.push_back(mis);
     return ans1;
    }
};
