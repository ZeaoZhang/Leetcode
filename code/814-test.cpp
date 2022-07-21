#include"./includes/814.hpp"

int main()
{
    TreeNode *t1 = new TreeNode(0);
    TreeNode *t2 = new TreeNode(0);
    TreeNode *t3 = new TreeNode(0, t1, t2);
    TreeNode *root = new TreeNode(1, NULL, t3);
    Solution Solution;
    TreeNode *result = Solution.pruneTree(root);
    if(result->left == NULL &&  result->right == NULL)
    {
        return 1;
    }
    return 0;
}

