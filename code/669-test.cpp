#include"./includes/669.hpp"


int main()
{
    TreeNode* root = new TreeNode(1, new TreeNode(0), new TreeNode(2));
    Solution obj;
    TreeNode* newroot = obj.trimBST(root, 1, 2);
    if(newroot->left == nullptr && newroot->right->val == 2)
    {
        return 1;
    }
    return 0;
}
