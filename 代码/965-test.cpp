#include"965.hpp"


int main()
{
	TreeNode* r = new TreeNode(1);
	TreeNode* l = new TreeNode(1);
	TreeNode* root = new TreeNode(1, l, r);

	Solution s;
	//���True
	cout << s.isUnivalTree(root) << endl;

}