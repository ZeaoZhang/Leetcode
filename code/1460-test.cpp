#include"./includes/1460.hpp"

int main()
{
    vector<int> target = {1, 2, 3, 4};
    vector<int> arr = {2, 4, 1, 3};
    Solution obj;
    if(obj.canBeEqual(target, arr) == true)
    {
        return 1;
    }
    return 0;
}
