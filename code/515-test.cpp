#include"./includes/515.hpp"

int main()
{
    TreeNode* s1 = new TreeNode(1);
    TreeNode* s2 = new TreeNode(2);
    TreeNode* s3 = new TreeNode(3, s1, s2);
    Solution solution;
    vector<int> result = {3, 2};
    if(solution.largestValues(s3) == result)
    {
        return 1;
    }
    return 0;
}

