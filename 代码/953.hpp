#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Solution {
public:
    bool compare(string s1, string s2, string order)
    {
        int i = 0;
        while (i < s1.size() && i < s2.size())
        {
            if (s1[i] == s2[i])
            {
                ++i;
            }
            else
            {
                int p1, p2;
                int j = 0;
                while (j < order.size())
                {
                    if (s1[i] == order[j])
                    {
                        p1 = j;
                    }
                    if (s2[i] == order[j])
                    {
                        p2 = j;
                    }
                    ++j;
                }
                if (p1 > p2)
                {
                    return true;
                }
                else {
                    return false;
                }
            }
        }
        return s1.size() >= s2.size();
    }

    bool isAlienSorted(vector<string>& words, string order) {
        for (int i = 1; i < words.size(); ++i)
        {
            bool result = compare(words[i], words[i - 1], order);
            if (result == false)
            {
                return false;
            }
        }
        return true;
    }
};