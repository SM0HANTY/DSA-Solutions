// Find N Unique Integers Sum up to Zero

/*Given an integer n, return any array containing n unique integers such that they add up to 0.*/


class Solution {
public:
    vector<int> sumZero(int n) {
        int a=n;
       vector<int>ans;
        if(n%2!=0){
           ans.push_back(0);
            n--;
        }
        while(ans.size()!=a){
            ans.push_back(n);
            ans.push_back(-n);
            n--;
       } 
       return ans;
    }
};
