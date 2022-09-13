#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0;i < n; ++i)
        {
            if(n - i <= nums[i])
            {
                if(i == 0)
                {
                    return n - i;
                }
                else if(i > 0 && n - i > nums[i - 1])
                {
                    return n - i;
                }
            }
        }
        return -1;


    }
};
