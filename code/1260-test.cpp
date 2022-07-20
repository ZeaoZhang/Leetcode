#include"./includes/1260.hpp"

int main()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    vector<int> v3 = {7, 8, 9};
    vector<vector<int>> v = {v1, v2, v3};
    vector<vector<int>> result = {v3, v1, v2};
    Solution Solution;
    if(Solution.shiftGrid(v, 3) == result)
    {
        return 1;
    }
    return 0;
}

