#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool oneEditAway(string first, string second) {
        if (first == second) {
            return true;
        }
        int len1 = first.size();
        int len2 = second.size();
        int i, j;
        int count;
        if (len1 == len2)            //替换
        {
            i = 0;
            count = 0;
            while (i < len1)
            {
                if (first[i] != second[i])
                {
                    ++count;
                    if (count > 1)
                    {
                        return false;
                    }
                }
                ++i;
            }
        }
        else if (len1 == len2 + 1)           //删除
        {
            i = 0;
            j = 0;
            count = 0;
            while (i < len1 && j < len2)
            {
                if (first[i] != second[j])
                {
                    ++i;
                    ++count;
                    if (count > 1)
                    {
                        return false;
                    }
                    continue;
                }
                else
                {
                    ++i;
                    ++j;
                }
            }

        }
        else if (len1 == len2 - 1)                        //插入
        {
            i = 0;
            j = 0;
            count = 0;
            while (i < len1 && j < len2)
            {
                if (first[i] != second[j])
                {
                    ++j;
                    ++count;
                    if (count > 1)
                    {
                        return false;
                    }
                    continue;
                }
                else
                {
                    ++i;
                    ++j;
                }
            }
        }
        else                                //一次操作无法完成
        {
            return false;
        }
        return true;

    }
};