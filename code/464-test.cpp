#include"464.hpp"


int main()
{
    int maxChoosableInteger = 10, desiredTotal = 11;
    Solution solution;
    //���۵�һ�����ѡ���ĸ�������������ʧ�ܡ�
    //��һ����ҿ���ѡ��� 1 �� 10 ��������
    //�����һ�����ѡ�� 1����ô�ڶ������ֻ��ѡ��� 2 �� 10 ��������
    //�ڶ�����ҿ���ͨ��ѡ������ 10����ô�ۻ���Ϊ 11 >= desiredTotal�����Ӷ�ȡ��ʤ��.
    //ͬ���أ���һ�����ѡ�����������������ڶ�����Ҷ���Ӯ��
    //���0
    cout << solution.canIWin(maxChoosableInteger, desiredTotal) << endl;     
    return 0;
}