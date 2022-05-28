#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string result = "";
        int len = s.size();
        for (int i = 0; i < len; ++i)
        {
            if (count > 0 && !(s[i] == ')' && count == 1))
            {
                result += s[i];
            }
            if (s[i] == '(')
            {
                ++count;
            }
            else
            {
                --count;
            }
        }
        return result;

    }
};