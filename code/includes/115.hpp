#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    bool sequenceReconstruction(vector<int>& nums, vector<vector<int>>& sequences) {
        int len = nums.size();
        int m = sequences.size();
        vector<vector<int>> graph(len + 1, vector<int>(0, 0));
        vector<int> indegree(len + 1, 0);
        queue<int> q;
        for(int i = 0; i < m; ++i)
        {
            int n = sequences[i].size();
            for(int j = 0; j < n; ++j)
            {
                if(j != 0)
                {
                    ++indegree[sequences[i][j]];
                    graph[sequences[i][j - 1]].push_back(sequences[i][j]);
                }
            }
        }
        for(int i = 1;i < len + 1; ++i)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }
        int k = 0;
        int p;
        while(!q.empty())
        {
            if(q.size() > 1)
            {
                return false;
            }
            p = q.front();
            if(p != nums[k++])
            {
                return false;
            }
            q.pop();
            for(int j = 0; j < graph[p].size(); ++j)
            {
                --indegree[graph[p][j]];
                if(indegree[graph[p][j]] == 0)
                {
                    q.push(graph[p][j]);
                }
            }
        }
        return true;   
    }
};

