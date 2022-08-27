#include<iostream>
#include<vector>
#include<map>
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
    typedef unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, ll>> q;
        TreeNode* p = root;
        TreeNode* lastnode = root;
        ll maxWidth = 1;
        ll index = 1;
        ll lastindex = 1;
        q.push({p, 1});
        while(!q.empty())
        {
            auto f = q.front();
            p = f.first;
            index = f.second;
            q.pop();
            if(p->left != nullptr)
            {
                q.push({p->left, index * 2});
            }
            if(p->right != nullptr)
            {
                q.push({p->right, index * 2 + 1});
            }
            if(p == lastnode)
            {
                auto b = q.back();
                lastnode = b.first;
                lastindex = b.second;
                if(q.empty())
                {
                    break;
                }
                auto f = q.front();
                p = f.first;
                index = f.second;
                ll num = lastindex - index + 1;
                if(num > maxWidth)
                {
                    maxWidth = num;
                }
            }
        }
        return maxWidth;
    }
};
