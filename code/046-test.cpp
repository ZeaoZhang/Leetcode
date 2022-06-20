#include"./includes/046.hpp"

int main()
{
    TreeNode* t2 = new TreeNode(3);
    TreeNode* t3 = new TreeNode(2);
    TreeNode* t1 = new TreeNode(1, t2, t3);
    Solution solution;
    vector<int> result = {1, 2};
    if(solution.rightSideView(t1) == result)
    {
        return 1;
    }

    return 0;

}

