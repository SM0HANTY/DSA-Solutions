//Minimum Operations to Make Binary Array Elements Equal to One I

/*You are given a binary array nums.

You can do the following operation on the array any number of times (possibly zero):

Choose any 3 consecutive elements from the array and flip all of them.
Flipping an element means changing its value from 0 to 1, and from 1 to 0.

Return the minimum number of operations required to make all elements in nums equal to 1. If it is impossible, return -1.*/


#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    void flip(vector<int>& n, int j) {
        for(int i=j;i<j+3;i++) {
           if(n[i]==0){
            n[i]=1;
           }else{
            n[i]=0;
           }
        }
    }
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0; i<=n-3;i++) {
            if(nums[i]==0) {
                flip(nums, i);
                c++;
            }
        }
        if(nums[n-2]==0||nums[n-1]==0) {
            return -1;
        }
        return c;
    }
};
