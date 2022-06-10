#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = -10000000;
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; ++i)
        {
            if(sum >= 0)
            {
                sum += nums[i];
            }
            else
            {
                sum = nums[i];
            }
            if(sum > max)
            {
                max = sum;
            }
        }
        return max;
    }
};