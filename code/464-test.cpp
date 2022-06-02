#include"./includes/464.hpp"


int main()
{
    int maxChoosableInteger = 10, desiredTotal = 11;
    Solution solution;
    if(solution.canIWin(maxChoosableInteger, desiredTotal) == false)
    {
        return 1;
    }     
    return 0;
}