#include"./includes/450.hpp"


int main()
{
	TreeNode* p1 = new TreeNode(2);
	TreeNode* p2 = new TreeNode(4);
	TreeNode* p3 = new TreeNode(3, p1, p2);
	TreeNode* p4 = new TreeNode(7);
	TreeNode* p5 = new TreeNode(6, NULL, p4);
	TreeNode* root = new TreeNode(5, p3, p5);
	//root = [5, 3, 6, 2, 4, null, 7]
	Solution solution;
	if(solution.deleteNode(root, 0) == root && solution.deleteNode(root, 5) == p5)
	{
		return 1;
	}
	return 0;
}