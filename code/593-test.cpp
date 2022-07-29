#include"./includes/593.hpp"

int main()
{
    vector<int> p1 = {0, 0};
    vector<int> p2 = {1, 1};
    vector<int> p3 = {1, 0};
    vector<int> p4 = {0, 1};
    Solution Solution;

    if(Solution.validSquare(p1, p2, p3, p4) == true)
    {
        return 1;
    }
    return 0;
}

