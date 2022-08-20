#include"./includes/654.hpp"

int main()
{
    vector<int> nums = {3,2,1,6,0,5};
    Solution obj;
    TreeNode *root = obj.constructMaximumBinaryTree(nums);
    if(root->left->right->right->val == 1 && root->right->left->val == 0)
    {
        return 1;
    }
    return 0;
}
