#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> fallingSquares(vector<vector<int>>& positions) {
        int n = positions.size();
        vector<int> ans(n, 0);
        map<int, int> dic;
        for (int i = 0; i < n; ++i)
        {
            int ileft = positions[i][0];
            int iright = ileft + positions[i][1];
            int max_high = 0;
            for (int j = i - 1; j >= 0; --j)
            {
                int jleft = positions[j][0];
                int jright = jleft + positions[j][1];
                if ((ileft < jright && ileft >= jleft) || (iright > jleft && iright <= jright) || (ileft <= jleft && iright >= jright))
                {
                    if (dic[j] > max_high)
                    {
                        max_high = dic[j];
                    }
                }
            }
            dic[i] = max_high + positions[i][1];
        }
        int max = 0;
        for (int k = 0; k < n; ++k)
        {
            if (dic[k] > max)
            {
                max = dic[k];
            }
            ans[k] = max;
        }
        return ans;
    }

};