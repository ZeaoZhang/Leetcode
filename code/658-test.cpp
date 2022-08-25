#include"./includes/658.hpp"

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> res = {1, 2, 3, 4};
    Solution obj;
    if(obj.findClosestElements(arr, 4, 3) == res)
    {
        return 1;
    }
    return 0;
}
