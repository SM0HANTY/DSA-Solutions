//Smallest Missing Multiple of K

/*Given an integer array nums and an integer k, return the smallest positive multiple of k that is missing from nums.

A multiple of k is any positive integer divisible by k.*/


class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<int>ans;
        int a=k;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%k==0){
                ans.insert(nums[i]);
            }
        }
        for(int i:ans){
            if(i==a){
                a+=k;
            }else{
                return a;
            }
        }
        return a;
    }
};

