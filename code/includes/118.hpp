#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp;
        for(int i = 0;i < numRows; ++i)
        {
            vector<int> level(i + 1, 1);
            for(int j = 0;j <= i; ++j)
            {
                if(j != 0 && j != i)
                {
                    level[j] = dp[i - 1][j - 1] + dp[i - 1][j];
                }
            }
            dp.push_back(level);
        }
        return dp;
    }
};

