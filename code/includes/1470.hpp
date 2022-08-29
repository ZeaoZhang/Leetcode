#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(n * 2, 0);
        int i = 0;
        int k = 0;
        while(i < n)
        {
            res[i * 2] = nums[i];
            res[i * 2 + 1] = nums[i + n];
            ++i;
        }
        return res;
    }
};
