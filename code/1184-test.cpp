#include"./includes/1184.hpp"

int main()
{
    vector<int> distance = {1, 2, 3, 4};
    Solution Solution;
    if(Solution.distanceBetweenBusStops(distance, 0, 2) == 3)
    {
        return 1;
    }
    return 0;
}

