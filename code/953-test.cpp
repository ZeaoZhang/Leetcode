#include"953.hpp"

int main()
{
    vector<string> words;
    words.push_back("hello");
    words.push_back("leetcode");
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    Solution solution;
    //���true,�ڸ����Ե���ĸ���У�'h' λ�� 'l' ֮ǰ�����Ե��������ǰ��ֵ������еġ�
    cout << solution.isAlienSorted(words, order) << endl;

    return 0;
}