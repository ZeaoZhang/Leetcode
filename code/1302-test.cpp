#include"./includes/1302.hpp"
#include<vector>


int main()
{
    TreeNode* root = new TreeNode(1, new TreeNode(2), new TreeNode(3, new TreeNode(4), new TreeNode(5)));

    Solution obj;
    if(obj.deepestLeavesSum(root) == 9)
    {
        return 1;
    }
    return 0;
}

