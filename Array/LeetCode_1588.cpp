//Sum of All Odd Length Subarrays


/*Given an array of positive integers arr, return the sum of all possible odd-length subarrays of arr.

A subarray is a contiguous subsequence of the array.*/

class Solution {
    int sumOddLen(vector<int> &arr){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return sum;
    }
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            vector<int>ans;
            for(int j=i;j<n;j++){
                ans.push_back(arr[j]);
                if(ans.size()%2!=0){
                   int a=sumOddLen(ans);
                   sum+=a;
                }
            }
        }
        return sum;
    }
};
