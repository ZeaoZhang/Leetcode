#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> copy(arr);
        int i = 0, j = 0;
        int n = arr.size();
        while(i < n && j < n)
        {
            if(copy[j] != 0)
            {
                arr[i] = copy[j];
            }
            else
            {
                arr[i] = 0;
                if(i < n - 1)
                {
                    arr[i + 1] = 0;
                    ++i;
                }
            }
            ++i;
            ++j;
        }
    }

};

