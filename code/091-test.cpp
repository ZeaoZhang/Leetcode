#include"./includes/091.hpp"

int main()
{
    vector<int> v1 = {17, 2, 17};
    vector<int> v2 = {16, 16, 5};
    vector<int> v3 = {14, 3, 19};
    vector<vector<int>> costs;
    costs.push_back(v1);
    costs.push_back(v2);
    costs.push_back(v3);
    Solution solution;
    if(solution.minCost(costs) == 10)
    {
        return 1;
    }
    return 0;
}

