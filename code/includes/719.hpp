#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int high = nums[n - 1] - nums[0];
        int low = 0;
        while(low < high)
        {
            int mid = (low + high) / 2;
            int count = 0;
            int i = 1, j = 0;
            for(; i < n; ++i)
            {
                while(nums[i] - nums[j] > mid)
                {
                    ++j;
                }
                count += i - j;
            }
            if(count >= k)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};

