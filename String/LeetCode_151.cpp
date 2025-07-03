//Reverse words in a String

/*Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.*/


class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string str="";
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' || i==s.length()-1){
                if(i==s.length()-1 && s[i]!=' '){
                    str.push_back(s[i]);
                }
                if(!str.empty()){
                reverse(str.begin(),str.end());
                if(!ans.empty()){
                    ans.push_back(' ');
                }
                ans+=str;
                str.erase();
                }
            }else{
                str.push_back(s[i]);
            }
        }
        return ans;
    }
};
