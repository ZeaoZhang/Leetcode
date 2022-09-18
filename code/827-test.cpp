#include"./includes/827.hpp"


int main()
{
    vector<vector<int>> grid = {{1, 0}, {0, 1}};
    Solution obj;
    if(obj.largestIsland(grid) == 3)
    {
        return 1;
    }
    return 0;
}
