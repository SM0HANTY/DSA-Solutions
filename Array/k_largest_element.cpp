//K Largest Element

/*You are given an unsorted array containing ‘N’ integers. You need to find ‘K’ largest elements from the given array. Also, you need to return the elements in non-decreasing order.*/

#include <bits/stdc++.h> 
vector<int> Klargest(vector<int> &a, int k, int n) {
    // Write your code here
    vector<int>ans;
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i--){
        ans.push_back(a[i]);
        if(ans.size()==k){
            break;
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
