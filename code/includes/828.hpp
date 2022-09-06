#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


class Solution {
public:
    int uniqueLetterString(string s) {
        int n = s.size();
        int count = 0;
        vector<int> left(n);
        vector<int> right(n);
        int last[26];
        fill(last, last + 26, -1);
        for(int i = 0;i < n; ++i)
        {
            int j = int(s[i] - 'A');
            left[i] = last[j];
            last[j] = i;
        }
        fill(last, last + 26, n);
        for(int i = n - 1;i >= 0; --i)
        {
            int k = int(s[i] - 'A');
            right[i] = last[k];
            last[k] = i;
        }
        for(int i = 0;i < n; ++i)
        {
            count += (i - left[i]) * (right[i] - i);
        }

        return count;
    }
};
