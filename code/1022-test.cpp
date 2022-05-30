#include "1022.hpp"

int main()
{
	//建树  [1,0,1,0,1,0,1]
	TreeNode* t4 = new TreeNode(0);
	TreeNode* t5 = new TreeNode(1);
	TreeNode* t6 = new TreeNode(0);
	TreeNode* t7 = new TreeNode(1);
	TreeNode* t2 = new TreeNode(0, t4, t5);
	TreeNode* t3 = new TreeNode(1, t6, t7);
	TreeNode* t1 = new TreeNode(1, t2, t3);
	Solution solution;
	//（100）+（101）+（110）+（111） =  22 ， 输出22
	cout << solution.sumRootToLeaf(t1) << endl;


	return 0;
}