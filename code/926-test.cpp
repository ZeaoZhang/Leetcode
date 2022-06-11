#include "./includes/926.hpp"

int main()
{
    string s1 = "00011000";
    string s2 = "11011";
    Solution solution;
    if(solution.minFlipsMonoIncr(s1) == 2 && solution.minFlipsMonoIncr(s2) == 1)
    {
        return 1;
    }
    return 0;

}

