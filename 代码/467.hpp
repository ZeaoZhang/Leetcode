#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int findSubstringInWraproundString(string p) {
        int count[26];
        memset(count, 0, sizeof(count));
        int num;
        for (int i = 0; i < p.size(); ++i)
        {
            num = 1;
            int j = i;
            while (j > 0 && (p[j] - p[j - 1] + 26) % 26 == 1)
            {
                ++num;
                --j;
            }
            int c = p[i] - 'a';
            if (num > count[c])
            {
                count[c] = num;
            }
        }
        int sum = 0;
        for (int i = 0; i < 26; ++i)
        {
            sum += count[i];
        }
        return sum;
    }
};