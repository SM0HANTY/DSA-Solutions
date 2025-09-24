//Count Elements With Maximum Frequency

/*You are given an array nums consisting of positive integers.

Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

The frequency of an element is the number of occurrences of that element in the array.*/


class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>ans;
        int maxi=INT_MIN;
        int maxi2=0;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
            maxi=max(maxi,ans[nums[i]]);
        }
        for(auto i:ans){
            if(i.second==maxi){
                maxi2+=i.second;
            }
        }
        return maxi2;
    }
};
