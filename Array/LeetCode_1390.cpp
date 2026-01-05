//1390. Four Divisors

/*Given an integer array nums, return the sum of divisors of the integers in that array that have exactly four divisors. If there is no such integer in the array, return 0.*/


class Solution {
int div(int j){
    int c=0;
    int sum=0;
    for(int i=1;i<=sqrt(j);i++){
        if(j%i==0){
            c++;
            sum+=i;
            if(i!=j/i){
                c++;
                sum+=j/i;
            }
        }
    }
    if(c>4) return -1;
    if(c==4){
        return sum;
    }else{
        return -1;
    }
    
}
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
           int j=div(nums[i]);
        if(j>0){
            sum+=j;
        }
        }
        return sum;

    }
};
