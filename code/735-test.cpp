#include"./includes/735.hpp"

int main()
{
    vector<int> asteroids = {5, 10, -5};
    Solution Solution;
    vector<int> result = {5, 10};
    if(Solution.asteroidCollision(asteroids) == result)
    {
        return 1;
    }
    return 0;
}

