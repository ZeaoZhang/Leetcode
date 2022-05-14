#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int pos1 = 0, pos2 = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    pos1 = i;
                    pos2 = j;
                    break;

                }
            }

        }
        v.push_back(pos1);
        v.push_back(pos2);
        return v;

    }
};

int main()
{
    //测试
    //Solution s;
    //vector<int> nums = { 2, 7, 11, 15 };
    //int target = 9;
    //vector<int> result = s.twoSum(nums, target);
    //for (auto i : result)
    //{
    //    cout << i << endl;
    //}

    return 0;
}
