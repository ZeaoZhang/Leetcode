#include"01_05.hpp"

int main()
{

    string a = "abc";
    string b = "abec";
    string c = "a";
    Solution solution;
    cout << solution.oneEditAway(a, b) << endl;     //һ�β��뼴�ɣ�����True
    cout << solution.oneEditAway(a, c) << endl;     //һ�β������У�����False

    return 0;
}