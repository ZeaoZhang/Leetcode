#include<iostream>
#include<vector>
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
    int sumRootToLeaf(TreeNode* root) {
        TreeNode* st[1000];
        int top = -1;
        TreeNode* p = root;
        TreeNode* r = NULL;
        int sum = 0;
        while (p != NULL || top >= 0)
        {
            if (p)
            {
                st[++top] = p;
                p = p->left;
            }
            else
            {
                p = st[top];
                if (p->right != NULL && p->right != r)
                {
                    p = p->right;
                }
                else
                {
                    if (p->left == NULL && p->right == NULL)
                    {
                        int value = 0;
                        for (int i = 0; i <= top; ++i)
                        {
                            value = st[i]->val + value * 2;
                        }
                        sum += value;
                    }
                    r = p;
                    --top;
                    p = NULL;
                }

            }
        }
        return sum;

    }
};