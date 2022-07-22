#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    static bool cmp(const vector<int> &a, const vector<int> &b)
    {
        if(a[1] == b[1])
        {
            return a[0] > b[0];
        }
        return a[1] < b[1];
    }

    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        if(intervals.empty())
        {
            return 0;
        }
        sort(intervals.begin(), intervals.end(), cmp);
        int p = intervals[0][1], pre = intervals[0][1] - 1;
        int ans = 2;
        int n = intervals.size();
        for(int i = 1; i < n; ++i)
        {
            if(intervals[i][0] > p)
            {
                ans += 2;
                p = intervals[i][1];
                pre = p - 1; 
            }
            else if(intervals[i][0] > pre)
            {
                ++ans;
                pre = p;
                p = intervals[i][1];
            }
        }
        return ans;
    }
};

