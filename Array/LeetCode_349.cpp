// Intersection of Two Arrays

/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result;
        unordered_set<int>set1(nums1.begin(),nums1.end());
        unordered_set<int>set2(nums2.begin(),nums2.end());
        for(int num:set1){
            if(set2.count(num)){
                result.insert(num);
            }
        }

        return vector<int>(result.begin(), result.end());
    }
};
