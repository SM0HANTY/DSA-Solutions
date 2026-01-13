//1636. Sort Array by Increasing Frequency


/*Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

Return the sorted array.*/


class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();
        vector<int> ans;
        for (int x : nums) {
            freq[x]++;
        }
        for (int i = 1; i <= n; i++) { 
            vector<int> temp;
            for (auto &j : freq) {
                if (j.second == i) {
                    temp.push_back(j.first);
                }
            }
            sort(temp.begin(), temp.end(), greater<int>());
            for (int num : temp) {
                for (int k = 0; k < i; k++) {
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};
