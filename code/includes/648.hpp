#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
private:
    const int max_len = 1001;
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string temp = "";
        int len = sentence.size();
        int n = dictionary.size();
        int start = 0, end = 0;
        int min = max_len;
        string p = "";
        int i = 0;
        while(i < sentence.size())
        {
            start = i;
            while(i < len && sentence[i] != ' ')
            {
                ++i;
            }
            end = i;
            p = sentence.substr(start, end - start);
            min = max_len;
            for(string s : dictionary)
            {
                if(s[0] == sentence[start])
                {
                    if(s == sentence.substr(start, s.size()) && s.size() < min)
                    {
                        min = s.size();
                        p = s;
                    }
                }
            }
            temp += p;
            ++i;
            if(i < len)
            {
                temp += " ";
            }
        }
        return temp;
    }
};

