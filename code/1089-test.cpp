#include "./includes/1089.hpp"

int main()
{
	vector<int> arr = {1, 0, 2, 3, 0 ,4 ,5, 0};
	vector<int> result = {1, 0, 0, 2, 3, 0, 0, 4};
	Solution solution;
	solution.duplicateZeros(arr);
	if(arr == result)
	{
		return 1;
	}
	return 0;
}

