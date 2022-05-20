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
    //���� [3,4] ��û�����������ġ��Ҳࡱ���䡣
    //����[2, 3] ������[3, 4]������С�ġ��ҡ����;
    //����[1, 2] ������[2, 3]������С�ġ��ҡ���㡣
    Solution solution;
    vector<int> result = solution.findRightInterval(intervals);     
    for (int i = 0; i < result.size(); ++i)                //���[-1, 0, 1]
    {
        cout << result[i] << endl;
    }


    return 0;
}