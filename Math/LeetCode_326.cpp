//Power of Three

/*Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.*/


class Solution {
public:
    bool isPowerOfThree(int n) {
     long num = 1;
        while(num < n){
            num = num * 3;
        }
        return num == n;   
    }
};
