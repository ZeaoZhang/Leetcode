#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    string makeLargestSpecial(string s) {
        int count = 0, pre = 0, n = s.length();
        if(n == 0)
        {
            return "";
        }
        vector<string> vc;
        for(int i = 0; i < n; ++i)
        {
            char c = s[i];
            if(c == '1')
            {
                ++count;
            }
            else
            {
                --count;
                if(count == 0)
                {
                    vc.push_back('1' + makeLargestSpecial(s.substr(pre+1, i - pre - 1)) + '0');
                    pre = i + 1;
                }
            }
        }
        sort(vc.begin(), vc.end());
        string ans = "";
        for(int i = vc.size() - 1; i >= 0; --i)
        {
            ans += vc[i];
        }
        return ans;
    }
};

