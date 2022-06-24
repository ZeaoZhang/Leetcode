#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int INT_MIN = -2^31;
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
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        if(root == nullptr)
        {
            return result;
        }
        queue<TreeNode*> q;
        int max = INT_MIN;
        TreeNode* p = root;
        TreeNode* last = root;
        q.push(p);
        while(!q.empty())
        {
            p = q.front();
            q.pop();
            if(p->val > max)
            {
                max = p->val;
            }
            if(p->left != nullptr)
            {
                q.push(p->left);
            }
            if(p->right != nullptr)
            {
                q.push(p->right);
            }
            if(last == p)
            {
                last = q.back();
                result.push_back(max);
                max = INT_MIN;
            }
        }
        return result;

    }
};

