#include<iostream>
#include<map>
#include<vector>
using namespace std;


class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int> dic;
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            if (dic.find(nums[i]) != dic.end())
            {
                return nums[i];
            }
            else
            {
                dic[nums[i]] = 1;
            }
        }
        return -1;
    }
};