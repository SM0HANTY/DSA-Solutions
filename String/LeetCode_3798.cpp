//3798. Largest Even Number

/*You are given a string s consisting only of the characters '1' and '2'.

You may delete any number of characters from s without changing the order of the remaining characters.

Return the largest possible resultant string that represents an even integer. If there is no such string, return the empty string "".*/



class Solution {
public:
    string largestEven(string s) {
     int n=s.length();
     int i=n;
     while(i>0 && s[i-1]%2!=0){
        s.pop_back();
        i--;
     } 
     return s;  
    }
};
