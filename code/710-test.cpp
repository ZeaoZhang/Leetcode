#include"./includes/710.hpp"

int main()
{
    vector<int> blacklist = {2, 3, 5};
    Solution solution(7, blacklist);
    for(int i = 0; i < 7; ++i)
    {
        int k = solution.pick();
        if(k == 0 || k == 1 || k == 4 || k == 6)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

