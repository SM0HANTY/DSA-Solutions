//Check If Digits Are Equal in String After Operations I


/*You are given a string s consisting of digits. Perform the following operation repeatedly until the string has exactly two digits:

For each pair of consecutive digits in s, starting from the first digit, calculate a new digit as the sum of the two digits modulo 10.
Replace s with the sequence of newly calculated digits, maintaining the order in which they are computed.
Return true if the final two digits in s are the same; otherwise, return false.*/



class Solution {
    bool pal(string a){
        int j=a.size()-1;
        int i=0;
        while(i<j){
            if(a[i]!=a[j])return false;
            i++;
            j--;
        }
        return true;
    }
public:
    bool hasSameDigits(string s) {
      string st=s;
      while(st.length()>2){
        string ans="";
        for(int i=0;i<st.length()-1;i++){
            int a=(st[i]+st[i+1])%10;
            ans+=to_string(a);
        }
        st=ans;
      } 
      return pal(st); 
    }
};




//optimal one
class Solution {
public:
    bool hasSameDigits(string s) {
        int i=0;
        string ans="";
      while(s.length()>2 && i<s.size()-1){
             ans+=(s[i]+s[i+1])%10;
             i++;
            if(i==s.size()-1){
                s=ans;
                i=0;
                ans="";
            }
      } 
      if(s.size()==2 && s[0]==s[1])return true;
      return false;
    }
};
