#include"./includes/118.hpp"

int main()
{
    Solution Solution;
    vector<vector<int>> result = {{1},{1,1},{1,2,1},{1,3,3,1},{1,4,6,4,1}};
    if(Solution.generate(5) == result)
    {
        cout << "OK" << endl;
        return 1;
    }
    return 0;
}

