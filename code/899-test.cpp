#include"./includes/899.hpp"

int main()
{
    Solution Solution;
    if(Solution.orderlyQueue("cba", 1) == "acb" && Solution.orderlyQueue("baaca", 3) == "aaabc")
    {
        return 1;
    }
    return 0;
}

