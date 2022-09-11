#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;


class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        vector<int> temp(n);
        for(int i = 0;i < n; ++i)
        {
            temp[i] = i;
        }
        sort(temp.begin(), temp.end(), [&](const int &x, const int &y){
            return double(wage[x]) / quality[x] < double(wage[y]) / quality[y];
        });
        double minSum = INT_MAX, sum = 0;
        priority_queue<int, vector<int>> q;
        for(int i = 0; i < k - 1; ++i)
        {
            sum += quality[temp[i]];
            q.emplace(quality[temp[i]]);
        }
        for(int i = k - 1; i < n; ++i)
        {
            sum += quality[temp[i]];
            q.emplace(quality[temp[i]]);
            double curSum = double(wage[temp[i]]) / quality[temp[i]] * sum;
            minSum = min(curSum, minSum);
            sum -= q.top();
            q.pop();
        }
        return minSum;
    }
};
