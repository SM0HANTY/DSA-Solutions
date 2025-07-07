//Permutation in String

/*Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.*/


class Solution {
    private:
    bool checkEqual(int a[],int b[]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            count1[s1[i]-'a']++;
        }
        int count2[26]={0};
        int windowSize=s1.length();
        int i=0;
        while(i<windowSize && i<s2.length()){
            count2[s2[i]-'a']++;
            i++;
        }
            if(checkEqual(count1,count2)){
                return true;
            }
            while(i<s2.length()){
                count2[s2[i]-'a']++;
                count2[s2[i-windowSize]-'a']--;
                if(checkEqual(count1,count2)){
                    return true;
                }
                i++;
        }
        return false;
    }
};
