#include"./includes/929.hpp"

int main()
{
	vector<string> emails = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
	Solution solution;
	if(solution.numUniqueEmails(emails) == 2)
	{
		return 1;
	}
	return 0;

}