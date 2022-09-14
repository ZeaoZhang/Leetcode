#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int d = arr.size() / 20;
        double sum = 0;
        for(int i = d; i < arr.size() - d; ++i)
        {
            sum += arr[i];
        }
        return sum / (arr.size() - 2 * d);
    }
};
