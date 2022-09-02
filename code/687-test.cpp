#include"./includes/687.hpp"


int main()
{
    TreeNode *root = new TreeNode(5,
                                    new TreeNode(4, new TreeNode(1), new TreeNode(1)),
                                    new TreeNode(5, nullptr, new TreeNode(5)));
    
    Solution obj;
    if(obj.longestUnivaluePath(root) == 2)
    {
        return 1;
    }
    return 0;
}
