#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int dp[1001][1001];
class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {        
        for(int i = 0; i < 1001; ++i)
        {
            for(int j = 0; j < 1001; ++j)
            {
                dp[i][j] = 2;
            }
        }
        unordered_map<int, int> mp;
        int n = arr.size();
        for(int i = 0; i < n; ++i)
        {
            mp[arr[i]] = i;
        }
        int max = 0;
        for(int j = 0; j < n; ++j)
        {
            for(int i = j - 1; i >= 0; --i)
            {
                int sub = arr[j] - arr[i];
                if(mp.count(sub) != 0)
                {
                    int k = mp[sub];
                    if(k != -1 && k != i && k != j)
                    {
                        if(k < i)
                        {
                            dp[i][j] = dp[i][j] > dp[k][i] + 1 ? dp[i][j] : dp[k][i] + 1;
                        }              
                        max = max > dp[i][j] ? max : dp[i][j];
                    }
                }
            }
        }
        return max < 3 ? 0 :max;
    }
};

