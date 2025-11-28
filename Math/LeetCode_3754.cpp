//Concatenate Non-Zero Digits and Multiply by Sum I


/*You are given an integer n.

Form a new integer x by concatenating all the non-zero digits of n in their original order. If there are no non-zero digits, x = 0.

Let sum be the sum of digits in x.

Return an integer representing the value of x * sum.

*/


class Solution {
public:
    long long sumAndMultiply(int n) {
      long long sum=0;
      string st;
      while(n>0){
        int a=n%10;
        if(a!=0){
            st+=char('0'+a);
            sum+=a;
        }
        n/=10;
      } 
      if(st.empty()){
        return 0;
      }
      reverse(st.begin(),st.end());
      long long num=stoll(st);
      return num*sum; 
    }
};
