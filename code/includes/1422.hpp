#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        int n = s.size();
        for(int i = 1;i < n; ++i)
        {
            if(s[i] == '1')
            {
                ++score;
            }
        }
        if(s[0] == '0')
        {
            ++score;
        }
        int maxscore = score;
        for(int i = 1;i < n - 1; ++i)
        {
            if(s[i] == '1')
            {
                --score;
            }
            else
            {
                ++score;
                if(maxscore < score)
                {
                    maxscore = score;
                }
            }
        }
        return maxscore;
    }
};

