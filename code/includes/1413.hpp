#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int minSum = 10000000;
        for(int i : nums)
        {
            sum += i;
            if(sum < minSum)
            {
                minSum = sum;
            }
        }
        return minSum >= 0 ? 1 : -1 * minSum + 1;
    }
};

