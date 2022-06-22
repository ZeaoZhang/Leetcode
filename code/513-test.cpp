#include"./includes/513.hpp"

int main()
{
    TreeNode* s1 = new TreeNode(1);
    TreeNode* s2 = new TreeNode(3);
    TreeNode* s3 = new TreeNode(2, s1, s2);
    Solution solution;
    if(solution.findBottomLeftValue(s3) == 1)
    {
        return 1;
    }
    return 0;
}

