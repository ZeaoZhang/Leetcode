#include"./includes/436.hpp"

void insert(vector<vector<int>> &v, int x, int y)
{
	vector<int> v1;
	v1.push_back(x);
	v1.push_back(y);
	v.push_back(v1);
}

int main()
{
	vector<vector<int>> intervals;
	insert(intervals, 3, 4);
	insert(intervals, 2, 3);
	insert(intervals, 1, 2);
	//应该输出 {-1， 0 ，1}
	vector<int> v = {-1, 0 ,1};
	Solution solution;
	vector<int> result = solution.findRightInterval(intervals);      
	for (int i = 0; i < 3; ++i)               
	{
		if(result[i] != v[i])
		{
			return 0;
		}
	}


	return 1;
}