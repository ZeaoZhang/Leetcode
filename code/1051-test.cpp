#include"./includes/1051.hpp"

int main()
{
    vector<int> heights ={1, 1, 4, 2, 1, 3};
    //expected = {1， 1， 1， 2， 3， 4} 输出3
    Solution solution;
    if(solution.heightChecker(heights) == 3)
    {
        return 1;
    }
    return 0;
}

