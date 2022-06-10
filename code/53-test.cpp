#include"./includes/53.hpp"

int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution solution;
    if(solution.maxSubArray(nums) == 6)
    {
        return 1;
    }
    return 0;
}