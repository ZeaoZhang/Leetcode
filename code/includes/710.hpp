#include<iostream>
#include<vector>
#include<random>
#include<algorithm>
using namespace std;

class Solution {
public:
    Solution(int n, vector<int>& blacklist) {
        range = n;
        _blacklist.assign(blacklist.begin(), blacklist.end());
        sort(_blacklist.begin(), _blacklist.end());
    }
    
    int pick() {
        int num = range - _blacklist.size();
        int pos = rand() % num;
        int k = 0;
        while(k < _blacklist.size() && _blacklist[k] < pos + k + 1) 
        {
            ++k;
        }
        return pos + k;
    }
private:
    int range;
    vector<int> _blacklist;
};

