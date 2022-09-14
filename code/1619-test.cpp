#include"./includes/1619.hpp"


int main()
{
    vector<int> arr = {6,2,7,5,1,2,0,3,10,2,5,0,5,5,0,8,7,6,8,0};
    Solution obj;
    if(obj.trimMean(arr) == 4)
    {
        return 1;
    }
    return 0;
}
