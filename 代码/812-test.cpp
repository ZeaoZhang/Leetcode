#include"812.hpp"

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

    //最大面积由(0, 0), (0, 2), (2, 0)组成的三角形，输出2
    cout << solution.largestTriangleArea(points) << endl;           

    return 0;
}
