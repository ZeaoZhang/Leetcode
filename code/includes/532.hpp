#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int n = nums.size();
        int i = 0, j = 0;
        while(i < n && j < n)
        {
            if(i == j)
            {
                ++i;
                continue;
            }
            int num = abs(nums[i] - nums[j]);
            if(num < k)
            {
              ++i;  
            }
            else if(num == k)
            {
                ++count;
                while(i + 1 < n && nums[i + 1] == nums[i])
                {
                    ++i;
                }
                ++i;
                ++j;
            }
            else
            {
                ++j;
            }
        }
        return count;
    }
};

