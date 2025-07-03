//Find all anagrams in a string

/*Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.*/


class Solution {
    private:
    bool checkEqual(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int count1[26]={0};
       for(int i=0;i<p.length();i++){
        count1[p[i]-'a']++;
       } 
       int i=0;
       int windowSize=p.length();
       int count2[26]={0};
       while(i<windowSize && i<s.length()){
        count2[s[i]-'a']++;
        i++;
       }
       if(checkEqual(count1,count2)){
        ans.push_back(i);
       }
       while(i<s.length()){
        char newChar=s[i];
        count2[newChar-'a']++;
        char oldChar=s[i-windowSize];
        count2[oldChar-'a']--;
       }
       if(checkEqual(count1,count2)){
        ans.push_back(i);
       }
       return ans;
    }
};
