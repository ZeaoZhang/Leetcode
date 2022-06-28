#include"./includes/324.hpp"

int main()
{
    vector<int> nums = {1, 5, 1, 1, 6, 4};
    Solution solution;
    vector<int> result = {1, 6, 1 ,5 ,1, 4};
    solution.wiggleSort(nums);
    if(nums == result)
    {
        return 1;
    }
    return 0;
}

