#include"./includes/462.hpp"

int main()
{
    vector<int> nums = { 1, 2 , 3 };
    Solution solution;
    //只需要两步操作
    //[1, 2, 3] = > [2, 2, 3] = > [2, 2, 2]
    if(solution.minMoves2(nums) == 2)
    {
        return 1;
    }


    return 0;
}