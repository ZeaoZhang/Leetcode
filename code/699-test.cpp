#include"./includes/699.hpp"

int main()
{
	vector<vector<int>> v(3, vector<int>(2,0));
	//positions = [[1,2],[2,3],[6,1]]
	v[0][0] = 1;
	v[0][1] = 2;
	v[1][0] = 2;
	v[1][1] = 3;
	v[2][0] = 6;
	v[2][1] = 1;
	vector<int> answers = {2, 5, 5};
	Solution s;
	vector<int> ans = s.fallingSquares(v);
	for (auto i : ans)
	{
		if(ans[i] != answers[i])
		{
			return 0;
		}
	}

	return 1;
}
