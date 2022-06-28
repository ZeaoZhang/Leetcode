#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp(nums);
        sort(temp.begin(), temp.end());
        int n = nums.size();
        int low, high;
        low = (n - 1) / 2;
        high = n - 1;
        int k = 0;
        while(k < n)
        {
            nums[k++] = temp[low--];
            if(k >= n)
            {
                break;
            }
            nums[k++] = temp[high--];
        }
    }
};

