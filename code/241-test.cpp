#include"./includes/241.hpp"

int main()
{
    string expression = "2-1-1";
    vector<int> result = {2, 0};
    Solution solution;
    if(solution.diffWaysToCompute(expression) == result)
    {
        return 1;
    }
    return 0;
}

