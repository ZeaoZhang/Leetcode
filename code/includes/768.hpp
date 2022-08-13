#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        vector<int> minarr(n, 0);
        minarr[n - 1] = arr[n - 1];
        for(int i = n - 2; i > 0; --i)
        {
            minarr[i] = min(minarr[i + 1], arr[i]);
        }
        int front_max = arr[0];
        int count = 0;
        int i = 0;
        while(i < n - 1)
        {
            if(front_max <= minarr[i + 1])
            {
                ++count;
            }
            ++i;
            front_max = max(front_max, arr[i]);
        }
        return count + 1;
    }
};

