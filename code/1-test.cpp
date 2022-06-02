#include"./includes/1.hpp"

int main()
{
    Solution s;
    vector<int> nums = { 2, 7, 11, 15 };
    vector<int> result = s.twoSum(nums, 9);
    int sum = 0;
    for(int i : result)
    {
        sum += nums[i];
    }
    if(sum == 9)
    {
        return 1;
    }
    return 0;
}
