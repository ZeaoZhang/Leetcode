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
private:
    queue<TreeNode*> q;

public:
    int maxLevelSum(TreeNode* root) {
        q.push(root);
        TreeNode *lastnode = root;
        int count = 0;
        int level = 2;
        int maxnum = root->val;
        int maxlevel = 1;
        while(!q.empty())
        {        
            TreeNode *p = q.front();
            q.pop();
            if(p->left != NULL)
            {
                q.push(p->left);
                count += p->left->val;
            }
            if(p->right != NULL)
            {
                q.push(p->right);
                count += p->right->val;
            }
            if(q.empty())
            {
                break;
            }
            if(p == lastnode)
            {
                lastnode = q.back();
                if(count > maxnum)
                {
                    maxnum = count;
                    maxlevel = level;
                } 
                ++level;    
                count = 0;
            }
        }
        return maxlevel;
    }
};

