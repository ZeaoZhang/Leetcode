#include"./includes/998.hpp"



int main()
{
    TreeNode* root = new TreeNode(6, new TreeNode(3), new TreeNode(5));
    Solution obj;
    TreeNode* newroot = obj.insertIntoMaxTree(root, 4);
    if(newroot->right->right->val == 4)
    {
        return 1;
    }
    return 0;
}
