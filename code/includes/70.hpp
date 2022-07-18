#include<iostream>
using namespace std;

class Solution {
public:
    int dp[45];
    int climbStairs(int n) {
        dp[0] = 1;
        dp[1] = 2;
        // 第n级台阶 = 从第 n-1 级台阶爬一级  + 从第 n-2 级台阶爬两级
        for(int i = 2;i < n; ++i)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n - 1];
    }
};

