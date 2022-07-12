#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> col(n, 0);
        vector<int> row(m, 0);
        for(vector<int> &v : indices)
        {
            ++row[v[0]];
            ++col[v[1]];
        }
        int oddcol = 0, oddrow = 0;
        for(int &c : col)
        {
            if(c & 1)
            {
                ++oddcol;
            }
        }
        for(int &r : row)
        {
            if(r & 1)
            {
                ++oddrow;
            }
        }
        return oddrow * n + oddcol * m - oddrow * oddcol * 2;
    }
};

