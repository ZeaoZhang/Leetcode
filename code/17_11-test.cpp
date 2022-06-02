#include"./includes/17_11.hpp"

int main()
{
	vector<string> words;
	words.push_back("I");
	words.push_back("am");
	words.push_back("a");
	words.push_back("student");
	words.push_back("from");
	words.push_back("a");
	words.push_back("university");
	words.push_back("in");
	words.push_back("a");
	words.push_back("city");
	string word1 = "a", word2 = "student";
	//words = ["I","am","a","student","from","a","university","in","a","city"], word1 = "a", word2 = "student"
	Solution s;
	if(s.findClosest(words, word1, word2) == 1)
	{
		return 1;
	}
	return 0;
}