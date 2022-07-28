#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mp;
        int n = arr.size();
        for(int i = 0; i < n; ++i)
        {
            mp[arr[i]]++;
        }
        int rank = 1;
        for(auto it = mp.begin(); it != mp.end(); ++it)
        {
            it->second = rank++;
        }
        for(int i = 0;i < n; ++i)
        {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};

