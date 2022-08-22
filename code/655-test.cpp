#include"./includes/655.hpp"


int main()
{
    TreeNode* root = new TreeNode(1, new TreeNode(2), nullptr);
    Solution obj;
    vector<vector<string>> answer = {{"", "1", ""}, {"2", "", ""}};
    if(obj.printTree(root) == answer)
    {
        return 1;
    }
    return 0;
}
