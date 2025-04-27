//744. Find Smallest Letter Greater Than Target

/*You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.*/


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int s=0;
        int e=n-1;
        int ans=letters[0];
        while(s<=e){
            int mid=(s+e)/2;
            if(letters[mid]>target){
                ans=letters[mid];
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
};
