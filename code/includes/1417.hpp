#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string reformat(string s) {
        string s1 = "";
        string s2 = "";
        for(char c : s)
        {
            if(c >='0' && c <= '9')
            {
                s1 += c;
            }
            else
            {
                s2 += c;
            }
        }
        int i = 0, j = 0, k = 0;
        int m = s1.size();
        int n = s2.size();
        if(abs(m - n) > 1)
        {
            return "";
        }
        if(m - n == -1)
        {
            string temp = s1;
            s1 = s2;
            s2 = temp;
        }
        while(k < s.size())
        {
            s[k++] = s1[i++];
            if(k >= s.size())
            {
                break;
            }
            s[k++] = s2[j++];
        }
        return s;
    }
};

