#include"04_06.hpp"

int main()
{

    TreeNode* root = new TreeNode(2);
    TreeNode* r = new TreeNode(3);
    root->right = r;
    Solution s;
    //树为[2, 3], 根节点值为2， 根的中序后继节点的值为3
    cout << s.inorderSuccessor(root, root)->val << endl;    //输出3     
    cout << s.inorderSuccessor(root, r)<< endl;    //输出NULL    

    return 0;
}