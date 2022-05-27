#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int findClosest(vector<string>& words, string word1, string word2) {
        int pos1 = -100001, pos2 = 100001;
        int n = words.size();
        int minDis = 100001;
        for (int i = 0; i < n; ++i)
        {
            if (words[i] == word1)
            {
                pos1 = i;
            }
            if (words[i] == word2)
            {
                pos2 = i;
            }
            minDis = min(minDis, abs(pos1 - pos2));
        }
        return minDis;
    }
};