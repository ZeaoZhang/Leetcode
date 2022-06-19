#include"./includes/508.hpp"

int main()
{
    TreeNode* s1 = new TreeNode(2);
    TreeNode* s2 = new TreeNode(-3);
    TreeNode* s3 = new TreeNode(5, s1, s2);
    Solution solution;
    vector<int> result = {4, -3, 2};
    if(solution.findFrequentTreeSum(s3) == result)
    {
        return 1;
    }
    return 0;
}


