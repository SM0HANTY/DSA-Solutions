//Find the Index of the First Occurrence in a String

/*Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.*/


class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.length();
        int n=needle.length();
        if(n>m){
            return -1;
        }
        for(int i=0;i<=m;i++){
            if(haystack.substr(i,n)==needle){
                return i;
            }
        }
        return -1;
    }
};
