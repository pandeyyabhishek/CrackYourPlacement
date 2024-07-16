#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int f(int n, vector<int> &memo)
    {
        if (n < 0)
            return 0;
        if (memo[n] != -1)
            return memo[n];
        if (n == 0)
            return 1;
        int path = f(n - 1, memo) + f(n - 2, memo);
        return memo[n] = path;
    }
    int climbStairs(int n)
    {
        // memoization.
        vector<int> dp(n + 1, -1);
        return f(n, dp);

        // vector<int> dp(n + 1, -1);
        // dp[0]=1;
        // dp[1]=1;
        // for(int a=2;a<=n;a++){

        //         dp[a]=dp[a-1]+dp[a-2];
        // }
        // return dp[n];
    }
};