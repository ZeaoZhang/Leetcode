#include"467.hpp"


int main()
{
	string p = "zab";
	Solution s;
	//在字符串 s 中有六个子串“z”、“a”、“b”、“za”、“ab”、“zab”。  输出6
	cout << s.findSubstringInWraproundString(p) << endl;


	return 0;
}