//Valid Word

/*A word is considered valid if:

It contains a minimum of 3 characters.
It contains only digits (0-9), and English letters (uppercase and lowercase).
It includes at least one vowel.
It includes at least one consonant.
You are given a string word.

Return true if word is valid, otherwise, return false.

Notes:

'a', 'e', 'i', 'o', 'u', and their uppercases are vowels.
A consonant is an English letter that is not a vowel.*/

//Brute Force 

class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3){
            return false;
        }
        int c1=0,c2=0,c3=0,c4=0;
        for(int i=0;i<word.length();i++){
            if(word[i]>='0' && word[i]<='9'){
                c1++;
            }else if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' ||word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U'){
                c2++;
            } else if(word[i]=='@' || word[i]=='#' || word[i]=='$') {
               c4++;
            }else{
                c3++;
            }
        }
        if(c1>=0 && c2>0 && c3>0 && c4>0) {
            return false;
        }else if(c1>=0 && c2>0 && c3>0){
        return true;
        }else{
        return false;
        }
    }
};
