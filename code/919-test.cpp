#include"./includes/919.hpp"

int main()
{
    TreeNode *root = new TreeNode(1);
    CBTInserter obj(root);
    obj.insert(2);
    obj.insert(3);
    if(obj.get_root()->right->val == 3)
    {
        return 1;
    }
    return 0;
}

