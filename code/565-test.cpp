#include"./includes/565.hpp"

int main()
{
    vector<int> nums = {5, 4, 0, 3, 1, 6, 2};
    Solution Solution;
    if(Solution.arrayNesting(nums) == 4)
    {
        return 1;
    }
    return 0;
}

