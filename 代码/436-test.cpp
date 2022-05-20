#include"436.hpp"

void insert(vector<vector<int>> &v, int x, int y)
{
    vector<int> v1;
    v1.push_back(x);
    v1.push_back(y);
    v.push_back(v1);
}

int main()
{
    vector<vector<int>> intervals;
    insert(intervals, 3, 4);
    insert(intervals, 2, 3);
    insert(intervals, 1, 2);
    //对于 [3,4] ，没有满足条件的“右侧”区间。
    //对于[2, 3] ，区间[3, 4]具有最小的“右”起点;
    //对于[1, 2] ，区间[2, 3]具有最小的“右”起点。
    Solution solution;
    vector<int> result = solution.findRightInterval(intervals);     
    for (int i = 0; i < result.size(); ++i)                //输出[-1, 0, 1]
    {
        cout << result[i] << endl;
    }


    return 0;
}