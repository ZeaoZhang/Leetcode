#include"./includes/667.hpp"


int main()
{
    int n = 3, k = 2;
    vector<int> res = {1, 3, 2};
    Solution obj;
    if(obj.constructArray(n, k) == res)
    {
        return 1;
    }
    return 0;
}
