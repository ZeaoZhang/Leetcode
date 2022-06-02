#include"./includes/1021.hpp"

int main()
{
	string s = "(()())(())";
	Solution solution;
	string answer = "()()()";
	//输出"()()()"
	if(solution.removeOuterParentheses(s) == answer)
	{
		return 1;
	}
	return 0;
}