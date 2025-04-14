/*You are given an integer ‘N’, your task is to find and return the N’th Fibonacci number using matrix exponentiation.

Since the answer can be very large, return the answer modulo 10^9 +7.

Fibonacci number is calculated using the following formula:
F(n) = F(n-1) + F(n-2), 
Where, F(1) = F(2) = 1.
For Example:
For ‘N’ = 5, the output will be 5.*/


#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int fibonacciNumber(int n) {
    if (n == 1 || n == 2) return 1;

    long long a = 3, b = 1, c = 1, sum = 0;

    while (a <= n) {
        sum = (b + c) % MOD;
        b = c;
        c = sum;
        a++; 
    }

    return sum;
}
