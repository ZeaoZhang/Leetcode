#include"944.hpp"

int main()
{

    vector<string> strs = { "cba", "daf", "ghi" };  
    //�� 0��'a', 'b', 'c'������ 2��'c', 'e', 'e'�����ǰ��������еģ�
    //���� 1��'b', 'c', 'a'�����ǣ�����Ҫɾ���� 1 ��
    Solution solution;
    cout << solution.minDeletionSize(strs) << endl;         //���1

    return 0;
}