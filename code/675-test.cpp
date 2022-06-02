#include"./includes/675.hpp"


int main()
{
	vector<int> v0 = { 1, 2, 3 };
	vector<int> v1 = { 0, 0, 4 };
	vector<int> v2 = { 7, 6, 5 };
	vector<vector<int>> v = { v0, v1, v2 };
	//  1   2   3
	//  0   0   4
	//  7   6   5
	Solution s;
	if(s.cutOffTree(v) == 6)
	{
		return 1;
	}

	return 0;
}