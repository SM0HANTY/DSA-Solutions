//Ugly Number

/*An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.

Given an integer n, return true if n is an ugly number.*/

class Solution {
public:
    bool isUgly(int n) {
        if(n==0) return false;
      for(int i=2;i<=5;i++){
        if(i==4){
            continue;
        } 
      else{
        while(n%i==0){
            n/=i;
        }
      }
      }if(n==1)return true;
      return false;
    }
};
