//Convert Integer to the Sum of Two No-Zero Integers

/*No-Zero integer is a positive integer that does not contain any 0 in its decimal representation.

Given an integer n, return a list of two integers [a, b] where:

a and b are No-Zero integers.
a + b = n
The test cases are generated so that there is at least one valid solution. If there are many valid solutions, you can return any of them.*/


class Solution {
    private:
    bool checkZero(int a,int b){
        while(a!=0){
            int n=a%10;
            if(n==0)return true;
            a/=10;
        }
        while(b!=0){
            int n=b%10;
            if(n==0)return true;
            b/=10;
        }
        return false;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
      vector<int>ans;
       for(int i=1;i<n;i++){
        int a=i;
        int b=n-i;
            if(checkZero(a,b)==false){
                ans.push_back(a);
                ans.push_back(b);
                break;
       }
       }
       return ans;
    }
};
