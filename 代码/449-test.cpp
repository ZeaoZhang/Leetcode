#include"449.hpp"

int main()
{
    Codec codec;
    vector<int> pre = { 2, 1, 3 };
    vector<int> in = { 1, 2, 3 };
    TreeNode * root = codec.restruction(pre, 0, 2, in, 0, 2);
    cout << root->val << endl;
    string s = codec.serialize(root);
    cout << s << endl;
    TreeNode* newroot = codec.deserialize(s);
    cout << newroot->val << endl;
    cout << codec.serialize(newroot) << endl;

    return 0;
}
