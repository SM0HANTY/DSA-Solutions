//Missing and repeating numbers

/*You are given an array of size ‘N’. The elements of the array are in the range from 1 to ‘N’.

Ideally, the array should contain elements from 1 to ‘N’. But due to some miscalculations, there is a number R in the range [1, N] which appears in the array twice and another number M in the range [1, N] which is missing from the array.

Your task is to find the missing number (M) and the repeating number (R).

For example:
Consider an array of size six. The elements of the array are { 6, 4, 3, 5, 5, 1 }. 
The array should contain elements from one to six. Here, 2 is not present and 5 is occurring twice. Thus, 2 is the missing number (M) and 5 is the repeating number (R). */

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	unordered_map<int,int>ans;
	pair<int,int>ans1;
	for(int num:arr){
		ans[num]++;
	}
    for (int i = 1; i <= n; i++) {
        if (ans[i] == 0) {
            ans1.first = i; 
        }
        if (ans[i] == 2) {
            ans1.second = i;  
        }
    }

    return ans1;
}
