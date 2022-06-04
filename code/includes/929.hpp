#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        vector<string> v(emails.size(), "");
        for(int j = 0;j < emails.size(); ++j)
        {
            string s = emails[j];
            int i = 0;
            for(;i < s.size(); ++i)
            {
                if(s[i] == '@' || s[i] == '+')
                {
                    break;
                }
                if(s[i] == '.')
                {
                    s.erase(i, 1);
                }
            }
            v[j] += s.substr(0, i);
            while(s[i] != '@')
            {
                ++i;
            }
            v[j] += s.substr(i, s.size() - i - 1);
        }
        sort(v.begin(), v.end());
        int count = 1;
        for(int k = 1; k < v.size(); ++k)
        {
            if(v[k] != v[k - 1])
            {
                ++count;
            }
        }
        return count;
    }
};