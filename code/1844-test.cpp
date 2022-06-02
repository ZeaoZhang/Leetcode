#include "1844.hpp"

int main()
{
	string s = "a1c1e1";
	Solution solution;
	//理应输出"abcdef"
	string result = solution.replaceDigits(s);
	if (result == "abcdef")
	{
		return 1;
	}


	return 0;
}