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
    bool isprune(TreeNode *root)
    {
        if(root == NULL)
        {
            return false;
        }
        if(root->val == 1)
        {
            return true;
        }
        return isprune(root->left) || isprune(root->right);
    }

    TreeNode* pruneTree(TreeNode* root) {
        if(!isprune(root))
        {
            return NULL;
        }
        queue<TreeNode*> q;
        TreeNode *p = root;
        TreeNode *r = NULL;
        q.push(p);
        while(!q.empty())
        {
            p = q.front();
            q.pop();
            if(!isprune(p->left))
            {
                p->left = NULL;
            }
            else
            {
                q.push(p->left);
            }
            if(!isprune(p->right))
            {
                p->right = NULL;
            }
            else
            {
                q.push(p->right);
            }
        }
        return root;
    }
};

