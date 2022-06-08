#include "./includes/1037.hpp"

void insert(vector<vector<int>> &points, int x, int y)
{
    vector<int> v;
    v.push_back(x);
    v.push_back(y);
    points.push_back(v);
}

int main()
{
    Solution solution;
    vector<vector<int>> points;

    insert(points, 1, 1);
    insert(points, 2, 3);
    insert(points, 3, 2);
    if(solution.isBoomerang(points) == true)
    {      
        return 1;
    }
    return 0;
}