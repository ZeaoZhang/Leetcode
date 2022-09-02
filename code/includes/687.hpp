#include<iostream>
#include<vector>
#include<cmath>
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
    int longestUnivaluePath(TreeNode* root) {  
        if(root == nullptr)
        {
            return 0;
        }
        getMaxLength(root, root->val);
        return maxlen;
    }

private:
    int maxlen = 0;

    int getMaxLength(TreeNode* root, int val)
    {
        if(root == nullptr)
        {
            return 0;
        }
        int left = getMaxLength(root->left, root->val);
        int right = getMaxLength(root->right, root->val);
        maxlen = max(maxlen, left + right);
        if(root->val == val)
        {
            return max(left, right) + 1;
        }
        return 0;
    }
};
