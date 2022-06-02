#include"./includes/449.hpp"

int main()
{
    Codec codec;
    vector<int> pre = { 2, 1, 3 };
    vector<int> in = { 1, 2, 3 };
    TreeNode * root = codec.restruction(pre, 0, 2, in, 0, 2);
    string s = codec.serialize(root);
    TreeNode* newroot = codec.deserialize(s);
    if(newroot->right->val == 3)
    {
        return 1;
    } 

    return 0;
}
