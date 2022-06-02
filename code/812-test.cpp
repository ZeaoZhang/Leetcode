#include"./includes/812.hpp"

void insert(vector<vector<int>>& points, int x, int y)
{
    vector<int> v1;
    v1.push_back(x);
    v1.push_back(y);
    points.push_back(v1);
}

int main()
{
    Solution solution;
    vector<vector<int>> points;
    insert(points, 0, 0);
    insert(points, 0, 1);
    insert(points, 1, 0);
    insert(points, 0, 2);
    insert(points, 2, 0);

    if(solution.largestTriangleArea(points) == 2)   
    {
        return 1;
    }


    return 0;
}
