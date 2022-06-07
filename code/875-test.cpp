#include "./includes/875.hpp"

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    Solution solution;
    if(solution.minEatingSpeed(piles, 8) == 4)
    {
        return 1;
    }
    return 0;

}