#include"./includes/946.hpp"


int main()
{
    vector<int> pushed = {1, 2, 3, 4, 5};
    vector<int> poped = {4, 5, 3, 2, 1};
    Solution obj;
    if(obj.validateStackSequences(pushed, poped) == true)
    {
        return 1;
    }
    return 0;
}
