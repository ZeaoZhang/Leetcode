#include"./includes/1475.hpp"


int main()
{
    vector<int> prices = {8, 4, 6, 2, 3};
    vector<int> res = {4, 2, 4, 2, 3};
    Solution obj;
    if(obj.finalPrices(prices) == res)
    {
        return 1;
    }
    return 0;
}
