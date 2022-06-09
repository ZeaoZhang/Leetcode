#include<iostream>
#include<vector>
#include<random>
using namespace std;

class Solution {
public:
    Solution(vector<vector<int>>& rects) {
        re = rects;
        int len = re.size();
        sum.resize(len + 1);
        sum[0] = 0;
        for(int i = 1; i <= len; ++i)
        {
            sum[i] = sum[i - 1] + (re[i - 1][2] - re[i - 1][0] + 1) * (re[i - 1][3] - re[i - 1][1] + 1);
        }
    }
    
    vector<int> pick() {
        int low = 1;
        int high = re.size();
        int s = rand() % (sum[high]) + 1;
        while(low < high)
        {
            int mid = (high + low) / 2;
            if(sum[mid] >= s)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        int x = rand() % (re[low - 1][2] - re[low - 1][0] + 1) + re[low - 1][0];
        int y = rand() % (re[low - 1][3] - re[low - 1][1] + 1) + re[low - 1][1];
        vector<int> v = {x, y};
        return v;

    }
private:
    vector<vector<int>> re;
    vector<int> sum;
};

