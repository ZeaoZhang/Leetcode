#include"04_06.hpp"

int main()
{

    TreeNode* root = new TreeNode(2);
    TreeNode* r = new TreeNode(3);
    root->right = r;
    Solution s;
    //��Ϊ[2, 3], ���ڵ�ֵΪ2�� ���������̽ڵ��ֵΪ3
    cout << s.inorderSuccessor(root, root)->val << endl;    //���3     
    cout << s.inorderSuccessor(root, r)<< endl;    //���NULL    

    return 0;
}