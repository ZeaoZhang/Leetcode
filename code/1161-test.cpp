#include"./includes/1161.hpp"

int main()
{
    TreeNode *t1 = new TreeNode(7);
    TreeNode *t2 = new TreeNode(-8);
    TreeNode *t3 = new TreeNode(7, t1, t2);
    TreeNode *t4 = new TreeNode(0);
    TreeNode *root = new TreeNode(1, t3, t4);
    Solution Solution;
    if(Solution.maxLevelSum(root) == 2)
    {
        return 1;
    }
    return 0;
}

