#include<iostream>
#include<stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        stack<TreeNode*> s;
        TreeNode* q = root;
        TreeNode* pre = NULL;
        while (q || !s.empty())
        {
            if (q)
            {
                s.push(q);
                q = q->left;
            }
            else
            {
                q = s.top();
                s.pop();
                if (pre == p)
                {
                    return q;
                }
                pre = q;
                q = q->right;
            }
        }
        return NULL;
    }
};

int main()
{   
    //²âÊÔ
    //TreeNode* root = new TreeNode(2);
    //TreeNode* r = new TreeNode(3);
    //root->right = r;

    //Solution s;
    //cout << s.inorderSuccessor(root, root)->val << endl;          //·µ»Ø3

    return 0;
}