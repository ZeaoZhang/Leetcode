#include<iostream>
#include<vector>
#include<unordered_map>
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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int, int> cnt;
        int sum = get_sum(root, cnt);
        int max = 0;
        for(auto it = cnt.begin(); it != cnt.end(); ++it)
        {
            if(it->second > max)
            {
                max = it->second;
            }
        }
        vector<int> result;
        for(auto it = cnt.begin(); it != cnt.end(); ++it)
        {
            if(it->second == max)
            {
                result.push_back(it->first);
            }
        }       
        return result;
 

    }
private:
    int get_sum(TreeNode* root, unordered_map<int, int> &cnt)
    {
       if(root == NULL)
       {
           return 0;
       }
       int sum = get_sum(root->left, cnt) + get_sum(root->right, cnt) + root->val;
       cnt[sum]++;
       return sum;
    }
};


