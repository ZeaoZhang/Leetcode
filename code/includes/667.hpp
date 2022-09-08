#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> res;
        int i = 1, j = k + 1;
        // default 1 <= k < n <=10^4
        while(i <= j)
        {
            res.push_back(i++);
            if(i > j)
            {
                break;
            }
            res.push_back(j--);
        }
        j = k + 2;
        while(j <= n)
        {
            res.push_back(j++);
        }
        return res;
    }
};
