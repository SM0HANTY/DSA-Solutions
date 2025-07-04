//Longest consecutive sequence

/*Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.*/


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
       int maxi=1;
       int c=1;
       for(int i=1;i<nums.size();i++){
        if(nums[i-1]==nums[i]){
            continue;
        }else if(nums[i-1]+1==nums[i]){
            c++;
        }else{
    c=1;
}
maxi=max(maxi,c);
       } 
       return maxi;
    }
};
