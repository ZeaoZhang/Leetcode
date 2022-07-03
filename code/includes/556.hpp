#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
public:
    const long INF = pow(2, 31) - 1;
    int nextGreaterElement(int n) {
        vector<int> num;
        int x = n;
        while(x >= 1)
        {
            num.emplace_back( x % 10);
            x /= 10;
        }
        bool flag = false;
        int len = num.size();
        int p = 0;
        while(p < len  - 1 && num[p] <= num[p + 1])
        {
            ++p;
        }
        if(p == len - 1)
        {
            return -1;
        }
        ++p;
        int q = 0, min = 9;
        for(int i = 0; i < p; ++i)
        {
            if(num[i] < min && num[i] > num[p])
            {
                min = num[i];
                q = i;
            }
        }
        int temp = num[p];
        num[p] = num[q];
        num[q] = temp;
        sort(num.begin(), num.begin() + p, greater<int>());
        long ans = 0;
        for(int j = len - 1; j >= 0; --j)
        {
            ans = ans * 10 + num[j];
        }
        if(ans <= n || ans > INF)
        {
            return -1;
        }
        return ans;
    }

};

