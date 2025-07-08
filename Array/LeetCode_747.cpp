//Largest Number At Least Twice of Others

/*You are given an integer array nums where the largest integer is unique.

Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.*/


class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=INT_MIN;
        int index=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(maxi<nums[i]){
                maxi=nums[i];
                index=i;
            }
        }
        sort(nums.begin(),nums.end());
        if(2*nums[n-2]>nums[n-1]){
            return -1;
        }
        return index;
        
     }
};
