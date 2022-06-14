#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> nums;
        int m = mat.size();
        int n = mat[0].size();
        int x, y;
        for(int i = 0; i < m + n - 1; ++i)
        {
            if(i & 1)
            {
                y = (i < n) ? i : n - 1;
                x = i - y;
                while (y >= 0 && x < m)
                {
                    nums.push_back(mat[x][y]);
                    x++;
                    y--;
                }

            }
            else
            {
                x = (i < m) ? i : m - 1;
                y = i - x;
                while (x >= 0 && y < n)
                {
                    nums.push_back(mat[x][y]);
                    x--;
                    y++;
                }
            }
        }
        return nums;

    }
};

