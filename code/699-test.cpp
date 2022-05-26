#include"699.hpp"

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
	Solution s;
	vector<int> ans = s.fallingSquares(v);
	/*
	第 1 个方块掉落后，最高的堆叠由方块 1 组成，堆叠的最高高度为 2 。
	第 2 个方块掉落后，最高的堆叠由方块 1 和 2 组成，堆叠的最高高度为 5 。
	第 3 个方块掉落后，最高的堆叠仍然由方块 1 和 2 组成，堆叠的最高高度为 5 。
	因此，返回 [2, 5, 5] 作为答案。
	*/
	for (auto i : ans)
	{
		cout << i << endl;
	}

	return 0;
}