#include"./includes/532.hpp"

int main()
{
    vector<int> nums = {3, 1, 4, 1, 5};
    Solution solution;
    //有两个2-diff数对， 分别为(1, 3), (3, 5)
    if(solution.findPairs(nums, 2) == 2)
    {
        return 1;
    }
    return 0;

}

