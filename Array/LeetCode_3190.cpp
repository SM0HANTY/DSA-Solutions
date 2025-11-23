//Find Minimum Operations to Make All Elements Divisible by Three

/*You are given an integer array nums. In one operation, you can add or subtract 1 from any element of nums.

Return the minimum number of operations to make all elements of nums divisible by 3.*/



class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]%3!=0){
                c++;
            }
        }
        return c;
    }
};
