#include"462.hpp"

int main()
{
    vector<int> nums = { 1, 2 , 3 };
    Solution solution;
    //ֻ��Ҫ����������ÿ������ָ��ʹһ��Ԫ�ؼ� 1 ��� 1����
    //[1, 2, 3] = > [2, 2, 3] = > [2, 2, 2]
    cout << solution.minMoves2(nums) << endl; //���2


    return 0;
}