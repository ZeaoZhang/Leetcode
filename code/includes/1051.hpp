#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heights_image(heights);
        sort(heights_image.begin(), heights_image.end());
        int count = 0;
        int n = heights.size();
        for(int i = 0; i < n; ++i)
        {
            if(heights[i] != heights_image[i])
            {
                ++count;
            }
        }
        return count;
    }
};

