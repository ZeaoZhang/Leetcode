#include"./includes/498.hpp"

int main()
{
    vector<vector<int>> mat;
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    vector<int> v3 = {7, 8, 9};
    mat.push_back(v1);
    mat.push_back(v2);
    mat.push_back(v3);
    Solution solution;
    vector<int> answer = {1, 2, 4, 7, 5, 3, 6, 8, 9};
    if(solution.findDiagonalOrder(mat) == answer)
    {
        return 1;
    }
    return 0;
}

