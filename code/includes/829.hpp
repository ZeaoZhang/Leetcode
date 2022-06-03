#include<iostream>
using namespace std;

class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count = 0;
        int k = 1;
        while((k + 1) * k / 2 <= n)
        {
            if((2 * n) % k == 0 && (2 * n / k - k) & 1)
            {
                ++count;
            }
            ++k;
        }
        return count;
    }
};