#include"./includes/04_06.hpp"

int main()
{

    TreeNode* root = new TreeNode(2);
    TreeNode* r = new TreeNode(3);
    root->right = r;
    Solution s;
    if(s.inorderSuccessor(root, root) == r && s.inorderSuccessor(root, r) == NULL)
    {
        return 1;
    }       
    return 0;
}