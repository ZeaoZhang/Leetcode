#include"./includes/1200.hpp"

int main()
{
    vector<int> arr = {1, 3, 6, 10, 15};
    Solution Solution;
    vector<vector<int>> result;
    vector<int> v = {1, 3};
    result.emplace_back(v);
    if(Solution.minimumAbsDifference(arr) == result)
    {
        return 1;
    }
    return 0;
}

