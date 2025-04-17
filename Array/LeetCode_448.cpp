//448. Find All Numbers Disappeared in an Array

/*Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.*/


#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int c = 1;
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] > c) { 
                ans.push_back(c);
                c++;
            }
            if (nums[i] == c) 
            c++; 
        }
        while (c <= nums.size()) {
            ans.push_back(c);
            c++;
        }

        return ans;
    }
};
