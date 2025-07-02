//Check if the string is palindrome

/*You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.

Note :

String 'S' is NOT case sensitive.
Example :

Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.*/

#include <bits/stdc++.h> 
using namespace std;
bool valid(char ch){
    if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}
char toLower(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }else{
        char tempChar=ch-'A'+'a'; 
        return tempChar;
    }
}
bool isPalin(string a){ 
    int s=0,e=a.length()-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

bool checkPalindrome(string s)
{
    string temp = ""; 
    for(int j=0; j<s.length(); j++){
        if(valid(s[j])){
            temp.push_back(toLower(s[j])); 
        }
    }
    return isPalin(temp);
}
