//Maximize Expression of Three Elements


/*You are given an integer array nums.

Choose three elements a, b, and c from nums at distinct indices such that the value of the expression a + b - c is maximized.

Return an integer denoting the maximum possible value of this expression.*/


class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=nums[n-1];
        int b=nums[n-2];
        int c=nums[0];
        return a+b-c;
    }
};
