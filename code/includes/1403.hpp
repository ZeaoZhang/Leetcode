#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            sum += nums[i];
        }
        int ans = 0;
        vector<int> result;
        for(int i = n - 1; i >= 0; --i)
        {   
            result.push_back(nums[i]);
            ans += nums[i];
            if(ans > sum - ans)
            {
                break;
            }
        }
        return result;
    }
};

