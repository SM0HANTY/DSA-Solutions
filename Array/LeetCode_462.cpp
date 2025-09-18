//Minimum Moves to Equal Array Elements II

/*Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

In one move, you can increment or decrement an element of the array by 1.

Test cases are designed so that the answer will fit in a 32-bit integer.*/


class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mid=nums[n/2];
     for(int i=0;i<n;i++){
        int ans=abs(nums[i]-mid);
        c+=ans;
     }
     return c;   
    }
};
