#include"./includes/1403.hpp"

int main()
{
    vector<int> nums = {4, 3, 10, 9, 8};
    vector<int> answer = {10, 9};
    Solution Solution;
    if(Solution.minSubsequence(nums) == answer)
    {
        return 1;
    }
    return 0;
}

