//Check Divisibility by Digit Sum and Product



/*You are given a positive integer n. Determine whether n is divisible by the sum of the following two values:

The digit sum of n (the sum of its digits).

The digit product of n (the product of its digits).

Return true if n is divisible by this sum; otherwise, return false.*/


class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
     int prod=1;
     int sum=0;
     while(n!=0){
        int num=n%10;
        prod*=num;
        sum+=num;
        n/=10;
     }  
     int tot=sum+prod;
     if(x%tot==0){
        return true;
     }
     return false;
     
    }
};
