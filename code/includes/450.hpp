#include<iostream>
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
        {
            return NULL;
        }
        if(root->val > key)
        {
            root-> left = deleteNode(root->left, key);
            return root;
        }
        else if(root->val < key)
        {
            root->right = deleteNode(root->right, key);
            return root;
        }
        else
        {
            if(root->left == NULL && root->right != NULL)
            {
                return root->right;
            }
            else if(root->left != NULL && root->right == NULL)
            {
                return root->left;
            }
            else if(root->left == NULL && root->right == NULL)
            {
                return NULL;
            }
            else
            {
                TreeNode*p = root->right;
                while(p->left != NULL)
                {
                    p = p->left;
                }
                p->left = root->left;
                return root->right;
            }
        }
        return NULL;
    }

};