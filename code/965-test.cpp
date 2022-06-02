#include"./includes/965.hpp"


int main()
{
	TreeNode* r = new TreeNode(1);
	TreeNode* l = new TreeNode(1);
	TreeNode* root = new TreeNode(1, l, r);
	Solution s;
	if(s.isUnivalTree(root) == true)
	{
		return 1;
	}

	return 0;
}