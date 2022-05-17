#include"1.hpp"

int main()
{
    Solution s;
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    for (auto i : result)
    {
        cout << i << endl;
    }

    return 0;
}
