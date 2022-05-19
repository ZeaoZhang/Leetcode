#include"462.hpp"

int main()
{
    vector<int> nums = { 1, 2 , 3 };
    Solution solution;
    //只需要两步操作（每步操作指南使一个元素加 1 或减 1）：
    //[1, 2, 3] = > [2, 2, 3] = > [2, 2, 2]
    cout << solution.minMoves2(nums) << endl; //输出2


    return 0;
}