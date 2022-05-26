#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//���Ľ�㶨��
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:
    //����������������м��뵽������
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

    // ���������������������preOrder�������ص�����ת�����ַ���������
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

    //�����ַ����õ������������
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

    //��������������к�����������й��������
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

    // �����ַ�����split�����У��õ�����������У��ٶ����������õ�����������У����뵽restruction�����з��صõ����������
    TreeNode* deserialize(string data) {
        vector<int> preOrderSort = split(data);
        int len = preOrderSort.size();
        vector<int> inOrderSort(preOrderSort.begin(), preOrderSort.end());
        sort(inOrderSort.begin(), inOrderSort.end());
        TreeNode* root = restruction(preOrderSort, 0, len - 1, inOrderSort, 0, len - 1);
        return root;
    }
};