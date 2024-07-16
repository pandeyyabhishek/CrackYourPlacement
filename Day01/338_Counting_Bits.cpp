#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int f(int n, vector<int> &ans)
    {
        if (ans[n] != -1)
            return ans[n];
        if (n == 0)
            return ans[0] = 0;
        // if(n==1)return  ans[1]=1;
        f(n - 1, ans);
        int setBit = ans[n / 2];
        setBit = n % 2 == 0 ? setBit : setBit + 1;
        ans[n] = setBit;
        return ans[n];
    }
    vector<int> countBits(int n)
    {
        vector<int> ans(n + 1, -1);
        f(n, ans);
        return ans;
    }
};