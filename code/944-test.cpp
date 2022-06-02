#include"./includes/944.hpp"

int main()
{

    vector<string> strs = { "cba", "daf", "ghi" };  
    Solution solution;
    if(solution.minDeletionSize(strs) == 1)
    {
        return 1;
    }
    return 0;
}