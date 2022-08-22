#include<iostream>
#include<string>
#include<vector>
#include<queue>
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
    vector<vector<string>> printTree(TreeNode* root) {
        int depth = get_depth(root) - 1;
        vector<vector<string>> res(depth + 1, vector<string>(pow(2, depth + 1) - 1, ""));
        int c = pow(2, depth) - 1;
        res[0][c] = to_string(root->val);
        queue<TreeNode*> q;
        queue<int> position;
        position.push(c);
        TreeNode *p = root;
        q.push(p);
        TreeNode *lastnode = root;
        int cur_depth = 0;
        while(!q.empty())
        {
            p = q.front();
            q.pop();
            c = position.front();
            position.pop();
            int bais = pow(2, depth -1 - cur_depth);
            if(p->left != nullptr)
            {
                q.push(p->left);
                res[cur_depth + 1][c - bais] = to_string(p->left->val);
                position.push(c - bais);
            }
            if(p->right != nullptr)
            {
                q.push(p->right);
                res[cur_depth + 1][c + bais] = to_string(p->right->val);
                position.push(c + bais);
            }
            if(p == lastnode)
            {
                lastnode = q.back();
                ++cur_depth;
            }
        }
        return res;
    }

    int get_depth(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }
        return max(get_depth(root->left), get_depth(root->right)) + 1;
    }

};
