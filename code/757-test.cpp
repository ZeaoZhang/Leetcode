#include"./includes/757.hpp"

vector<int> range(int a, int b)
{
    vector<int> v = {a, b};
    return v;
}

int main()
{
    vector<vector<int>> intervals = {range(1, 3), range(1, 4), range(2, 5), range(3, 5)};
    Solution Solution;
    if(Solution.intersectionSizeTwo(intervals) == 3)
    {
        return 1;
    }
    return 0;
}

