#include"./includes/646.hpp"


int main()
{
    vector<vector<int>> pairs = {{1, 2}, {2, 3}, {3, 4}};
    Solution obj;
    if(obj.findLongestChain(pairs) == 2)
    {
        return 1;
    }
    return 0;
}
