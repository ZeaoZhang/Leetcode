#include"./includes/652.hpp"


int main()
{
    TreeNode* root = new TreeNode(1,
                                new TreeNode(2, new TreeNode(4), nullptr),
                                new TreeNode(3, 
                                            new TreeNode(2, new TreeNode(4), nullptr), 
                                            new TreeNode(4)));
    Solution obj;
    vector<TreeNode*> res = obj.findDuplicateSubtrees(root);
    if(res[0]->val == 4 && res[1]->val == 2)
    {
        return 1;
    }
    return 0;
}
