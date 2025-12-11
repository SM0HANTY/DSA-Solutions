/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.*/


//1st approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};




//2nd approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int freq=1;
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                freq++;
            }else{
                freq=1;
                ans=nums[i];
            }
        if(freq>n/2){
            return ans;
        }
        }
        return ans;
    }
};

