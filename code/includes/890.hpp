#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> result;
        map<char, char> dic;
        bool flag;
        int len = pattern.size();
        for(string word : words)
        {
            dic.clear();
            if(word.size() != len)
            {
                continue;
            }
            flag = true;
            for(int i = 0;i < len; ++i)
            {
                if(dic.count(word[i]) == 0)
                {
                    for(auto it = dic.begin();it != dic.end(); ++it)
                    {
                        if(it->second == pattern[i])
                        {
                            flag = false;
                            break;
                        }
                    }
                    if(!flag)
                    {
                        break;
                    }
                    dic[word[i]] = pattern[i];
                }
            }
            if(!flag)
            {
                continue;
            }
            string s = word;
            for(char &c : s)
            {
                c = dic[c];
            }
            if(s == pattern)
            {
                result.push_back(word);
            }
        }
        return result;
    }
};

