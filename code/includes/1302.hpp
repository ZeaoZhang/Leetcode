#include<iostream>
#include<queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        getsum(root, 0);
        return sum;
    }

    void getsum(TreeNode* root, int depth)
    {
        if(root == nullptr)
        {
            return;
        }
        if(depth > maxdepth)
        {
            maxdepth = depth;
            sum = root->val;
        }
        else if(depth == maxdepth)
        {
            sum += root->val;
        }
        getsum(root->left, depth+1);
        getsum(root->right, depth+1);

    }

private:
    int sum = 0;
    int maxdepth = 0;
};


