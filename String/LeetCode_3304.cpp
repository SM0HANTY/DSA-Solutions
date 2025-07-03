//Find the K-th Character in string game I

/*Alice and Bob are playing a game. Initially, Alice has a string word = "a".

You are given a positive integer k.

Now Bob will ask Alice to perform the following operation forever:

Generate a new string by changing each character in word to its next character in the English alphabet, and append it to the original word.
For example, performing the operation on "c" generates "cd" and performing the operation on "zb" generates "zbac".

Return the value of the kth character in word, after enough operations have been done for word to have at least k characters.

Note that the character 'z' can be changed to 'a' in the operation.*/


class Solution {
public:
    char kthCharacter(int k) {
        string str="a";
      while(str.length()<=k){
        int n=str.length();
        for(int i=0;i<n;i++){
            if(str[i]=='z'){
                str.push_back('a');
            }else{
            str.push_back(str[i]+1);
            }
        }
      }  
      return str[k-1];
    }
};
