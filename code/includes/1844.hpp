#include<iostream>
#include<string>
using namespace std;

class Solution {
public:

    string replaceDigits(string s)
    {
        for (int i = 1; i < s.size(); i = i + 2)
        {
            char c = char(int(s[i - 1]) + (s[i] - '0'));
            s[i] = c;
        }
        return s;
    }
};