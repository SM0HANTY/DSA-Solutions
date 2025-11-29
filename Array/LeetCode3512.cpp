//Minimum Operations to Make Array Sum Divisible by K



/*You are given an integer array nums and an integer k. You can perform the following operation any number of times:

Select an index i and replace nums[i] with nums[i] - 1.
Return the minimum number of operations required to make the sum of the array divisible by k.*/



class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
       for(int i=0;i<n;i++){
        sum+=nums[i];
       } 
       return sum%k;
    }
};
