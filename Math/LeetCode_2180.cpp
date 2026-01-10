//2180. Count Integers With Even Digit Sum

/*Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.

The digit sum of a positive integer is the sum of all its digits.*/



class Solution {
    bool evenDig(int n){
        int sum=0;
        while(n!=0){
            int a=n;
            sum+=a%10;
            n/=10;
        }
        if(sum%2==0)return true;
        return false;
    }
public:
    int countEven(int num) {
        int c=0;
        for(int i=1;i<=num;i++){
           int a= evenDig(i);
            if(a)c++;
        }
        return c;
    }

};
