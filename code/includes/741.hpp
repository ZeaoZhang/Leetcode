#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        int dp[100][50][50];
        for(int i = 0; i < 100; ++i)
        {
            for(int j = 0; j < 50; ++j)
            {
                for(int k = 0;k < 50; ++k)
                {
                    dp[i][j][k] = -1;
                }
            }
        }
        return max(0, dfs(grid, 0, 0, 0, dp));
    }

    int dfs(vector<vector<int>> &grid, int k, int x1, int x2, int dp[][50][50]) {
        int n = grid.size();
        int y1 = k - x1, y2 = k - x2;
        if (x1 >= n || y1 >= n || x2 >= n || y2 >= n || grid[x1][y1] == -1 || grid[x2][y2] == -1)
            return -10000000;
        if (dp[k][x1][x2] != -1) return dp[k][x1][x2];
        if (x1 == n - 1 && x2 == n - 1 && y1 == n - 1 && y2 == n - 1)
        {
            dp[k][x1][x2] = grid[x1][y1];
            return dp[k][x1][x2];
        } 
        int maxValue = max(max(dfs(grid, k + 1, x1 + 1, x2 + 1, dp), dfs(grid, k + 1, x1 + 1, x2, dp)), 
                            max(dfs(grid, k + 1, x1, x2 + 1, dp), dfs(grid, k + 1, x1, x2, dp)));
        int s = x1 == x2 && y1 == y2 && grid[x1][y1] == 1 ? -1 : 0;
        maxValue += grid[x1][y1] + grid[x2][y2] + s;
        dp[k][x1][x2] = maxValue; 
        return maxValue; 
    }
};

