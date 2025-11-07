//Maximum Product of Three Elements After One Replacement

/*You are given an integer array nums.

You must replace exactly one element in the array with any integer value in the range [-105, 105] (inclusive).

After performing this single replacement, determine the maximum possible product of any three elements at distinct indices from the modified array.

Return an integer denoting the maximum product achievable.*/




class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        long long mul=1;
        for(int i=0;i<n;i++){
            ans.push_back(abs(nums[i]));
        }
        sort(ans.begin(),ans.end());
        for(int i=n-2;i<n;i++){
            mul*=ans[i];
        }
        return mul*100000;
    }
};
