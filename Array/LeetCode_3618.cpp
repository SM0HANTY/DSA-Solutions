//Split Array by Prime Indices


/*You are given an integer array nums.

Split nums into two arrays A and B using the following rule:

Elements at prime indices in nums must go into array A.
All other elements must go into array B.
Return the absolute difference between the sums of the two arrays: |sum(A) - sum(B)|.

Note: An empty array has a sum of 0.*/


class Solution {
    private:
    bool isPrime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
public:
    long long splitArray(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        if(nums.size()==1){
            return abs((long long)nums[0]);
        }else if(nums.size()==2){
            return abs((long long)nums[0]+nums[1]);
        }
        long long sumA=0;
        long long sumB=nums[0]+nums[1];
        for(int i=2;i<nums.size();i++){
            if(isPrime(i)){
                sumA+=nums[i];
            }else{
                sumB+=nums[i];
            }
        }
        return abs(sumA-sumB);
    }
};
