#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int findLUSlength(vector<string>& strs) {
        int num = strs.size();
        int maxLen = -1;
        bool flag;
        for(int i = 0;i < num; ++i)
        {
            flag = true;
            for(int j = 0; j < num; ++j)
            {
                if(i != j && issubstr(strs[i], strs[j]))
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                int n = strs[i].size();
                maxLen = maxLen > n ? maxLen : n;
            }
        }
        return maxLen;
    }
    bool issubstr(string s1, string s2)
    {
        int i = 0, j = 0;
        int m = s1.size(), n = s2.size();
        while(i < m && j < n)
        {
            if(s1[i] == s2[j])
            {
                ++i;
            }
            ++j;
        }
        return i == m;
    }
};

