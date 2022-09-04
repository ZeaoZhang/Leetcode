#include"./includes/1582.hpp"


int main()
{
    vector<vector<int>> mat = {{1, 0, 0}, {0, 0, 1}, {1, 0, 0}};
    Solution obj;
    if(obj.numSpecial(mat) == 1)
    {
        return 1;
    }
    return 0;
}
