#include "./includes/736.hpp"

int main()
{
    string expression = "(let x 2 (mult x (let x 3 y 4 (add x y))))";
    Solution solution;
    if(solution.evaluate(expression) == 14)
    {
        return 1;
    }
    return 0;
}

