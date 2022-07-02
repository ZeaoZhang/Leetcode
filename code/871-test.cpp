#include"./includes/871.hpp"

int main()
{
    int target = 100, startFuel = 10;
    vector<int> v1 = {10, 60};
    vector<int> v2 = {20, 30};
    vector<int> v3 = {30, 30};
    vector<int> v4 = {60, 40};
    vector<vector<int>> stations = {v1, v2, v3 ,v3};
    Solution Solution;
    if(Solution.minRefuelStops(target, startFuel, stations) == 2)
    {
        return 1;
    }
    return 0;
}

