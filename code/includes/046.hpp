#include<iostream>
#include<vector>
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if(root==nullptr)
        {
            return result;
        }
        queue<TreeNode *> q;
        TreeNode *p;
        TreeNode* last = root;
        q.push(root);
        while(!q.empty())
        {
            p = q.front();
            if(p->left != nullptr)
            {
                q.push(p->left);
            }
            if(p->right != nullptr)
            {
                q.push(p->right);
            }
            if(p == last)
            {
                result.push_back(p->val);
                last = q.back();
            }
            q.pop();
        }
        return result;
    }
};

