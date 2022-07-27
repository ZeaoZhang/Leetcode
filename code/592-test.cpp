#include"./includes/592.hpp"

int main()
{
    string expression = "1/6+1/6-1/3";
    Solution Solution;
    if(Solution.fractionAddition(expression) == "0/1")
    {
        return 1;
    }
    return 0;
}

