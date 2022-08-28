#include<iostream>
#include<cmath>
using namespace std;


class Solution {
public:
    typedef unsigned long long ll;
    int preimageSizeFZF(int k) {
        ll low = 0;
        ll high = 5 * ll(k) + 1;
        while(low < high)
        {
            ll mid = (low + high) / 2;
            ll i = 1;
            ll sum = 0;
            while(mid >= pow(5, i))
            {
                sum += (mid / pow(5, i));
                ++i;
            }
            if(sum == k)
            {
                return 5;
            }
            else if(sum > k)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return 0;
    }
};
