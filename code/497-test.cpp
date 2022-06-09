#include"./includes/497.hpp"

int main()
{
    vector<int> v1 = {-2, -2, 1, 1};
    vector<vector<int>> v;
    v.push_back(v1);
    Solution solution(v);
    vector<int> result = solution.pick();
    for(int i : result)
    {
        if(i > 1 || i < -2)
        {
            return 0;
        }
    }
    return 1;
}