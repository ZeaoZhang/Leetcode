#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
    int maxEqualFreq(vector<int>& nums) {
        int n = nums.size();
        int maxcount = 0;
        int maxcountvalue = 0;
        unordered_map<int, int> mp;
        int maxpre = 0;
        for(int i = 0;i < n; ++i)
        {
            if(mp.count(nums[i]) == 0)
            {
                mp[nums[i]] = 1;
            }
            else
            {
                ++mp[nums[i]];
            }
            if(maxcountvalue < mp[nums[i]])
            {
                maxcountvalue = mp[nums[i]];
                maxcount = 1;
            }
            else if(maxcountvalue == mp[nums[i]])
            {
                ++maxcount;
            }
            
            if(maxcountvalue == 1 || maxcount * maxcountvalue == i || (maxcount == 1 && maxcountvalue - 1 == i / mp.size()))
            {
                maxpre = i + 1;
            }
        }
        return maxpre;
    }
};
