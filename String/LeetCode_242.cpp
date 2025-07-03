//Valid Anagram

/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.*/


class Solution {
public:
    bool isAnagram(string s, string t) {
        int c1[26]={0};
        int c2[26]={0};
        for(int i=0;i<s.length();i++){
            c1[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            c2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(c1[i]!=c2[i]){
                return false;
            }
        }
        return true;
    }
};
