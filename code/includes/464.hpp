#include<iostream>
using namespace std;

bool dp[1 << 20];    //״̬���飬��¼��ǰ״̬�Ƿ����Ӯ

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
        if (dp[state] == false)                                              //����״̬δ��ʹ��
        {
            for (int i = 0; i < m; ++i)
            {
                if (((state >> i) & 1) == 0)
                {
                    if (sum + i + 1 >= total)                                //��һ���Լ�����Ӯ
                    {
                        dp[state] = true;
                        break;
                    }
                    if (!dfs(m, total, state | 1 << i, sum + i + 1))          //��һ�ֶԷ�����Ӯ
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