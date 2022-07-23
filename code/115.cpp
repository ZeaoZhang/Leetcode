#include"./includes/115.hpp"

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> sequences = {{1, 2}, {1, 3}};
    Solution Solution;
    if(Solution.sequenceReconstruction(nums, sequences) == false)
    {
        return 1;
    }
    return 0;
}

