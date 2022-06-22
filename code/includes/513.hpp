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
    int findBottomLeftValue(TreeNode* root) {
        int value = root->val;
        TreeNode* last = root;
        TreeNode* p = root;
        queue<TreeNode*> q;
        q.push(p);
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
            q.pop();
            if(!q.empty() && p == last)
            {
                last = q.back();
                value = q.front()->val;
            }

        }
        return value;
    }
};

