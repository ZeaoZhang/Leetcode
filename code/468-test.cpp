#include "./includes/468.hpp"

int main()
{
	string s = "101.2.3.4";
	Solution solution;
	//输出IPv4
	if(solution.validIPAddress(s) == "IPv4")
	{
		return 1;
	}

	return 0;
}