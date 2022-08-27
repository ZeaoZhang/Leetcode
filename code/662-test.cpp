#include"./includes/662.hpp"


int main()
{
    TreeNode* root = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    Solution obj;
    if(obj.widthOfBinaryTree(root) == 2)
    {
        return 1;
    }
    return 0;
}
