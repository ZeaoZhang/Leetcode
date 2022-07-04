#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());
        int min = 1e7;
        int n = arr.size();
        int temp;
        for(int i = 1; i < n; ++i)
        {
            temp = arr[i] - arr[i - 1];
            if(temp < min)
            {
                min = temp;
            }
        }
        for(int i = 1; i < n; ++i)
        {
            temp = arr[i] - arr[i - 1];
            if(temp == min)
            {
                vector<int> v = {arr[i - 1], arr[i]};
                result.emplace_back(v);
            }
        }
        return result;
    }
};

