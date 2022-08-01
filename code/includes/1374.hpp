#include<iostream>
using namespace std;

class Solution {
public:
    string generateTheString(int n) {
        if(n % 2 == 0)
        {
            return copyn('a', n - 1) + 'b';
        }
        return copyn('a', n);

    }

    string copyn(char s, int n)
    {
        string result;
        for(int i = 0;i < n; ++i)
        {
            result += s;
        }
        return result;
    }
};

