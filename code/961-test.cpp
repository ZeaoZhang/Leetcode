#include"961.hpp"


int main()
{
    vector<int> nums = { 2, 3, 4, 2 };
    Solution solution;
    if(solution.repeatedNTimes(nums) == 2)
    {
        return 1;
    }

    return 0;
}