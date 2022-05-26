#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double max_size = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    if (i != j && i != k && j != k)
                    {
                        double xij = points[j][0] - points[i][0];
                        double yij = points[j][1] - points[i][1];
                        double xik = points[k][0] - points[i][0];
                        double yik = points[k][1] - points[i][1];
                        double size = fabs(xij * yik - yij * xik) / 2;                      //两向量的外积即使其组成的平行四边形的面积
                        if (size > max_size)
                        {
                            max_size = size;
                        }
                    }
                }
            }
        }
        return max_size;

    }
};