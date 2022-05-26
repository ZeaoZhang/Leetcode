#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//树的结点定义
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:
    //先序遍历，并将序列加入到数组中
    void preOrder(TreeNode* root, vector<int>& preOrderSort)
    {
        if (root == nullptr)
        {
            return;
        }
        preOrderSort.push_back(root->val);
        preOrder(root->left, preOrderSort);
        preOrder(root->right, preOrderSort);

    }

    // 将树进行先序遍历，并将preOrder函数返回的数组转换成字符串并返回
    string serialize(TreeNode* root) {
        string data = "";
        if (root == nullptr)
        {
            return data;
        }
        vector<int> preOrderSort;
        preOrder(root, preOrderSort);
        for (auto i : preOrderSort)
        {
            data.append(to_string(i) + ",");
        }
        data.erase(data.length() - 1, 1);

        return data;
    }

    //根据字符串得到先序遍历序列
    vector<int> split(const string& data)
    {
        vector<int> preOrderSort;
        int start = 0, end = 0;
        string s = data;
        s.append(",");
        int len = s.size();
        while (end < len)
        {
            while (s[end] != ',' && end < len)
            {
                ++end;
            }
            preOrderSort.push_back(stoi(s.substr(start, end - start)));
            start = ++end;
        }
        return preOrderSort;
    }

    //根据先序遍历序列和中序遍历序列构造二叉树
    TreeNode* restruction(vector<int> preOrderSort, int low1, int high1, vector<int> inOrderSort, int low2, int high2)
    {
        if (low1 > high1 || low2 > high2)
        {
            return NULL;
        }
        int value = preOrderSort[low1];
        TreeNode* root = new TreeNode(value);
        int mid2 = 0;
        for (int i = low2; i <= high2; ++i)
        {
            if (inOrderSort[i] == value)
            {
                mid2 = i;
                break;
            }
        }
        int mid1 = low1 + mid2 - low2;
        root->left = restruction(preOrderSort, low1 + 1, mid1, inOrderSort, low2, mid2 - 1);
        root->right = restruction(preOrderSort, mid1 + 1, high1, inOrderSort, mid2 + 1, high2);
        return root;
    }

    // 输入字符串到split函数中，得到先序遍历序列，再对其进行排序得到中序遍历序列，输入到restruction函数中返回得到的树根结点
    TreeNode* deserialize(string data) {
        vector<int> preOrderSort = split(data);
        int len = preOrderSort.size();
        vector<int> inOrderSort(preOrderSort.begin(), preOrderSort.end());
        sort(inOrderSort.begin(), inOrderSort.end());
        TreeNode* root = restruction(preOrderSort, 0, len - 1, inOrderSort, 0, len - 1);
        return root;
    }
};