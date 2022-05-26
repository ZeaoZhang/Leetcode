#include<iostream>
using namespace std;

bool dp[1 << 20];    //状态数组，记录当前状态是否可以赢

class Solution {
public:
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        int sum = maxChoosableInteger * (maxChoosableInteger + 1) / 2;
        if (sum < desiredTotal)
        {
            return false;
        }
        else if (sum == desiredTotal)
        {
            return maxChoosableInteger % 2;
        }
        if (maxChoosableInteger >= desiredTotal)
        {
            return true;
        }
        return dfs(maxChoosableInteger, desiredTotal, 0, 0);
    }

    bool dfs(int m, int total, int state, int sum)
    {
        if (dp[state] == false)                                              //若此状态未被使用
        {
            for (int i = 0; i < m; ++i)
            {
                if (((state >> i) & 1) == 0)
                {
                    if (sum + i + 1 >= total)                                //这一轮自己可以赢
                    {
                        dp[state] = true;
                        break;
                    }
                    if (!dfs(m, total, state | 1 << i, sum + i + 1))          //下一轮对方不能赢
                    {
                        dp[state] = true;
                        break;
                    }
                }
            }
        }
        return dp[state];
    }

                                                    
};