#include"./includes/1217.hpp"

int main()
{
    vector<int> position = {2, 2, 2, 3, 3};
    Solution solution;
    if(solution.minCostToMoveChips(position) == 2)
    {
        return 1;
    }
    return 0;
}

