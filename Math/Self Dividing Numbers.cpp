/*A Ninja wants to collect all possible self-dividing numbers from a given range of numbers.

A self-dividing number is a number that is divisible by every digit it contains.

For example:
128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
Given a ‘LOWER’ and ‘UPPER’ number bound, your task is to find all possible self-diving numbers in the range of ‘LOWER’ to ‘UPPER’.

Note:
A self-dividing number is not allowed to contain the digit zero.

You do not need to print anything; it has already been taken care of. Just implement the given function.*/

#include <bits/stdc++.h> 
bool selfDiv(int n){
int a=n;
while(a>0){
    int dig=a%10;
    if(dig==0 || n%dig!=0){
        return false;
    }
    a/=10;
}
return true;
}
vector < int > findAllSelfDividingNumbers(int lower, int upper) {
    // Write your code here
    vector<int>ans;
    for(int i=lower;i<=upper;i++){
    if(selfDiv(i)){
        ans.push_back(i);
    }
    }
    return ans;
}
