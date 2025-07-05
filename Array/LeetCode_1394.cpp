//Find Lucky Integer in an Array

/*Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.

Return the largest lucky integer in the array. If there is no lucky integer return -1.*/


class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxi=-1;
        unordered_map<int,int>count;
        for(int i=0;i<arr.size();i++){
            count[arr[i]]++;
        }
        for(const auto& pair:count){
            if(pair.first==pair.second){
                maxi=max(maxi,pair.first);
            }
        }
        return maxi;
    }
};
