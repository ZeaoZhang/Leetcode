#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), cmp);
        int count = 1;
        int pastright = pairs[0][1];
        for(int i = 1;i < pairs.size(); ++i)
        {
            if(pairs[i][0] > pastright)
            {
                ++count;
                pastright = pairs[i][1];
            }
        }
        return count;
    }

private:
    static bool cmp(vector<int>& a, vector<int>& b)
    {
        return (a[1] != b[1] ? a[1] < b[1] : a[0] < b[0]);
    }
};
