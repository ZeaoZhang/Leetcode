#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        int n = words.size();
        for(int i = 0;i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(words[i].size() >= words[j].size())
                {
                    continue;
                }
                if(words[j].find(words[i]) != words[j].npos)
                {
                    result.push_back(words[i]);
                    break;
                }
            }
        }
        return result;
    }
};



