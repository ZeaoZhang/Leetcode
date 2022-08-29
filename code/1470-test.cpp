#include"./includes/1470.hpp"


int main()
{
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    vector<int> res = {2, 3, 5, 4, 1, 7};
    Solution obj;
    if(obj.shuffle(nums, 3) == res)
    {
        return 1;
    }
    return 0;
}
