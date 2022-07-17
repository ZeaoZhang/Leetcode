#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int max = 1;
        int N = nums.size();
        vector<bool> visited(N, false);
        int remain = N;
        for(int i = 0; i < N; ++i)
        {
            if(max > remain)
            {
                break;
            }
            if(visited[nums[i]] == false)
            {
                visited[nums[i]] = true;
                int k = nums[nums[i]];
                int count = 1;
                --remain;
                while(k != nums[i])
                {
                    visited[k] = true;
                    k = nums[k];
                    ++count;
                    --remain;
                }
                if(count > max)
                {
                    max = count;         
                }
            }
        }
        return max;
    }
};

