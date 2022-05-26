#include<iostream>
#include<map>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int, int> dic;
        int n = intervals.size();
        vector<int> ans(n, -1);
        for (int i = 0; i < n; ++i)
        {
            dic.emplace(intervals[i][0], i);
        }
        for (int i = 0; i < n; ++i)
        {
            auto it = dic.lower_bound(intervals[i][1]);
            if (it != dic.end())
            {
                ans[i] = it->second;
            }
        }
        return ans;
    }
};