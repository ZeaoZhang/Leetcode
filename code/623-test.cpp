#include"./includes/623.hpp"

int main()
{
    TreeNode *root = new TreeNode(3, new TreeNode(2), new TreeNode(4));
    Solution Solution;
    TreeNode *newroot = Solution.addOneRow(root, 1, 2);
    if(newroot->left->val == 1 && newroot->left->left->val == 2)
    {
        return 1;
    }
    return 0;

}

