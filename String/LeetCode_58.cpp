//Length of Last Word


/*Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1, c = 0;
        while (i >= 0 && s[i] == ' ')
        i--;
        while (i >= 0 && s[i] != ' ') {
            c++;
            i--;
        }

        return c;
    }
};
