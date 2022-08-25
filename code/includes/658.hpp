#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i = 0;
        while(i < arr.size() - k)
        {
            if(arr[i + k] < x)
            {
                ++i;
            }
            else
            {
                if(i + k < arr.size() && x - arr[i] <= arr[i + k] - x)
                {
                    break;
                }
                else
                {
                    ++i;
                }
            }
        }
        return vector<int>(arr.begin() + i, arr.begin() +i + k);
    }
};
