#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string orderlyQueue(string s, int k) {
        string temp = s;
        int ans = 0;
        char max_c;
        int max_pos;
        string min_s = temp;
        if(k == 1)
        {
            ans = 0;
            while(ans < s.size() - 1)
            {
                max_c = temp[0];
                max_pos = 0;
                temp.erase(max_pos, 1);
                temp += max_c;
                if(temp < min_s)
                {
                    min_s = temp;
                }
                ++ans;
            }
        }
        else if(k > 1)
        {
            sort(min_s.begin(), min_s.end());
        }
        return min_s;
    }
};

