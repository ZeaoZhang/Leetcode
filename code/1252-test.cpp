#include"./includes/1252.hpp"

int main()
{
    vector<int> v1 = {0, 1};
    vector<int> v2 = {1, 1};
    vector<vector<int>> v = {v1, v2};
    Solution Solution;
    if(Solution.oddCells(2, 3, v) == 6)
    {
        return 1;
    }
    return 0;
}

