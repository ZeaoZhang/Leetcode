#include<iostream>
#include<vector>
#include<unordered_map>
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
private:
    unordered_map<string, int> mp;
    vector<TreeNode*> res;

    string dfs(TreeNode* root)
    {
        if(root == nullptr)
        {
            return "";
        }
        string s = to_string(root->val) + " " + dfs(root->left) + " " + dfs(root->right);
        ++mp[s];
        if(mp[s] == 2)
        {
            res.push_back(root);
        }
        return s;
    }

public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
        return res;
    }
};
