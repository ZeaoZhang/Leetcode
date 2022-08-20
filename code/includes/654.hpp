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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return createTree(nums, 0, nums.size() - 1);
    }


private:
    TreeNode* createTree(vector<int>& nums, int i, int j)
    {
        if(i > j)
        {
            return nullptr;
        }
        int pos = getmaxpos(nums, i, j);
        return new TreeNode(nums[pos], createTree(nums, i, pos - 1), createTree(nums, pos + 1, j));
    }


    int getmaxpos(vector<int> &nums, int i, int j)
    {
        int maxvalue = nums[i];
        int maxpos = i;
        for(int k = i; k <= j; ++k)
        {
            if(maxvalue < nums[k])
            {
                maxpos = k;
                maxvalue = nums[k];
            }
        }
        return maxpos;
    }
};
