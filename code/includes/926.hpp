#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int count_one = 0;
        int count_zero = 0;
        int min = 1000000;
        int n = s.size();
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '0')
            {
                ++count_zero;
            }
        }
        for(int j = 0; j < n; ++j)
        {
            if(s[j] == '0')
            {
                --count_zero;
            }
            if(j > 0 && s[j - 1] == '1')
            {
                ++count_one;
            }
            if(count_one + count_zero < min)
            {
                min = count_zero + count_one;
            }
        }
        return min;
    }
};

