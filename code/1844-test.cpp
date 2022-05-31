#include "1844.hpp"

int main()
{
	string s = "a1c1e1";
	Solution solution;
	//理应输出"abcdef"
	string result = solution.replaceDigits(s);
	if (result == "abcdef")
	{
		cout << "1844 OK" << endl;
	}
	else
	{
		cout << "1844 false" << endl;
	}


	return 0;
}