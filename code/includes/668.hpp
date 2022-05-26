#include<iostream>
using namespace std;


class Solution {
public:
    int cal(int mid, int m, int n)
    {
        int count = 0;
        for (int i = 1; i <= m; ++i)
        {
            if (i > mid)
            {
                break;
            }
            int s = mid / i;
            if (s > n)
            {
                count += n;
            }
            else {
                count += s;
            }
        }
        return count;
    }


    int findKthNumber(int m, int n, int k) {
        int low = 1, high = n * m;
        if (k > high)
        {
            return -1;
        }
        int mid = 0;
        int count = 0;
        while (low < high)
        {
            mid = (high + low) / 2;
            count = cal(mid, m, n);
            if (count >= k)
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