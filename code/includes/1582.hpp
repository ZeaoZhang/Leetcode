#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        for(int i = 0;i < mat.size(); ++i)
        {
            for(int j = 0;j < mat[0].size(); ++j)
            {
                if(mat[i][j] == 1 && isspecial(mat, i, j))
                {
                    ++count;
                }
            }
        }
        return count;
    }

    bool isspecial(vector<vector<int>> &mat, int i, int j)
    {
        for(int m = 0; m < mat.size(); ++m)
        {
            if(m != i && mat[m][j] == 1)
            {
                return false;
            }
        }
        for(int n = 0; n < mat[0].size(); ++n)
        {
            if(n != j && mat[i][n] == 1)
            {
                return false;
            }
        }
        return true;
    }
};
