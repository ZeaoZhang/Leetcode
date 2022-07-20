#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid[0].size();
        int n = grid.size();
        int step = k % (m * n);
        if(step == 0)
        {
            return grid;
        }
        vector<vector<int>> result(n, vector<int>(m, 0));
        int i = step;
        int j = 0;
        while(j < m * n)
        {
            result[i / m][i % m] = grid[j / m][j % m];
            ++i;
            ++j;
            if(i == m * n)
            {
                i = 0;
            }
        }
        return result;
    }
};


