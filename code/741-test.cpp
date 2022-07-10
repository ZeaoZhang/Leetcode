#include"./includes/741.hpp"

int main()
{
    vector<int> v1 = {0, 1, -1};
    vector<int> v2 = {1, 0, -1};
    vector<int> v3 = {1, 1, 1};
    vector<vector<int>> v{v1, v2, v3};
    Solution Solution;
    if(Solution.cherryPickup(v) == 5)
    {
        return 1;
    }
    return 0;
}

