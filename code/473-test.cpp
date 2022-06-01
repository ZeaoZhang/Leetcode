#include "473.hpp"

int main()
{
	vector<int> v = { 1, 1, 2, 2, 2 };
	Solution solution;
	if (solution.makesquare(v) == true)
	{
		cout << "473 OK" << endl;
	}
	else
	{
		cout << "473 false" << endl;
	}



	return 0;
}