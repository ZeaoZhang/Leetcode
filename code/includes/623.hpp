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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1)
        {
            return new TreeNode(val, root, NULL);
            
        }
        queue<TreeNode*> q;
        TreeNode* lastnode = root;
        TreeNode* p = root;
        int layer = 1;
        q.push(p);
        while(!q.empty())
        {
            if(layer == depth - 1)
            {
                while(!q.empty())
                {
                    p = q.front();
                    q.pop();
                    p->left = new TreeNode(val, p->left, NULL);
                    p->right = new TreeNode(val, NULL, p->right);
                }
                break;
            }
            p = q.front();
            q.pop();
            if(p->left != NULL)
            {
                q.push(p->left);
            }
            if(p->right != NULL)
            {
                q.push(p->right);
            }
            if(p == lastnode)
            {
                ++layer;
                lastnode = q.back();
            }
        }
        return root;
    }
};

