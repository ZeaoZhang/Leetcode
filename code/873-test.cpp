#include"./includes/873.hpp"

int main()
{
    vector<int> arr = {1, 3, 7, 11, 12, 14, 18};
    Solution Solution;
    if(Solution.lenLongestFibSubseq(arr) == 3)
    {
        return 1;
    }
    return 0;
}

