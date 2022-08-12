#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        unordered_map<int, vector<int>> mp;
        for(int i = 0;i < groupSizes.size(); ++i)
        {
            mp[groupSizes[i]].push_back(i);
        }
        for(auto it = mp.begin(); it != mp.end(); ++it)
        {
            for(auto cur = it->second.begin(); cur != it->second.end(); cur += it->first)
            {
                result.push_back(vector<int>(cur, cur + it->first));
            }
        }
        return result;
    }
};

