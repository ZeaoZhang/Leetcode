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
 
class CBTInserter {
public:
    CBTInserter(TreeNode* root) {
        this->root = root;
        TreeNode *p = root;
        queue<TreeNode*> q;
        q.push(p);
        while(!q.empty())
        {
            p = q.front();
            q.pop();
            if(p->left == NULL || p->right == NULL)
            {
                Qu.push(p);
            }
            if(p->left != NULL)
            {
                q.push(p->left);
            }
            if(p->right != NULL)
            {
                q.push(p->right);
            }
        }
    }
    
    int insert(int val) {
        TreeNode *p = Qu.front();
        TreeNode *n = new TreeNode(val);
        if(p->left == NULL)
        {
            p->left = n;
            Qu.push(n);
        }
        else
        {
            p->right = n;
            Qu.pop();
            Qu.push(n);
        }
        return p->val;
    }
    
    TreeNode* get_root() {
        return root;
    }
private:
    TreeNode *root;
    queue<TreeNode*> Qu;
};

