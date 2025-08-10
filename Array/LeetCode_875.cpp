//Koko Eating Banana

/*Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.*/



class Solution {
    private:
    double time(vector<int>& arr,int time){
        double total=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            total+=ceil((double)arr[i]/time);
        }
        return total;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1,e=*max_element(piles.begin(), piles.end());
        while(s<=e){
            double m=(s+e)/2;
            double reqdtm=time(piles,m);
            if(reqdtm<=h){
                e=m-1;
            }else{
                s=m+1;
            }
        }
        return s;
    }
};
