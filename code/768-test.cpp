#include"./includes/768.hpp"

int main()
{
    vector<int> arr = {2, 1, 3, 4, 4};
    Solution obj;
    if(obj.maxChunksToSorted(arr) == 4)
    {
        return 1;
    }
    return 0;
}

