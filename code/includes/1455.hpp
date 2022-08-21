#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = sentence.size();
        int len = searchWord.size();
        int i = 0;
        int j = 1;
        for(;i < n; ++i)
        {
            if(sentence.compare(i, len, searchWord) == 0)
            {
                break;
            }
            while(i < n && sentence[i] != ' ')
            {
                ++i;
            }
            ++j;
            if(i + len > n - 1)
            {
                i = n;
                break;
            }
        }
        return i == n ? -1 : j;
    }
};
