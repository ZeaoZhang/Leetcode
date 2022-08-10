#include"./includes/640.hpp"

int main()
{
    string equation = "x+5-3+x=6+x-2";
    Solution obj;
    string result = "x=2";
    if(obj.solveEquation(equation) == result)
    {
        return 1;
    }
    return 0;
}

