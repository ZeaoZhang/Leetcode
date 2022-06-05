#include"./includes/478.hpp"

int main()
{
    Solution solution(1, 0, 0);
    vector<double> v = solution.randPoint();
    if(v[0] * v[0] + v[1] * v[1] <= 1)
    {
        return 1;
    }
    return 0;
}