#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        if (matchsticks.size() < 4)
        {
            return false;
        }
        int sum = 0;
        for (int stick : matchsticks)
        {
            sum += stick;
        }
        if (sum % 4 != 0)
        {
            return false;
        }
        sort(matchsticks.begin(), matchsticks.end());
        int edge[4];
        fill(edge, edge + 4, 0);
        return allocate(matchsticks, matchsticks.size() - 1, edge, sum / 4);
    }

    bool allocate(vector<int>& matchsticks, int pos, int edge[], int avg)
    {
        if (pos == -1)
        {
            return (edge[0] == avg && edge[1] == avg && edge[2] == avg);
        }
        for (int i = 0; i < 4; ++i)
        {
            if (edge[i] + matchsticks[pos] > avg)
            {
                continue;
            }
            edge[i] += matchsticks[pos];
            if (allocate(matchsticks, pos - 1, edge, avg))
            {
                return true;
            }
            edge[i] -= matchsticks[pos];
        }
        return false;
    }
};