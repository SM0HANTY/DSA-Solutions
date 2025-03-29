/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).*/


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;
        int i = 0, j = 0;

        // Merge two sorted arrays
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i++]);
            } else {
                ans.push_back(nums2[j++]);
            }
        }
        // Add remaining elements from nums1
        while (i < m) {
            ans.push_back(nums1[i++]);
        }
        // Add remaining elements from nums2
        while (j < n) {
            ans.push_back(nums2[j++]);
        }

        // Find median
        int size = ans.size();
        int mid = size / 2;
        if (size % 2 == 0) {
            return (ans[mid] + ans[mid - 1]) / 2.0;
        } else {
            return ans[mid];
        }
    }
};
