//Find Missing and Repeated Values
/*You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.*/

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
