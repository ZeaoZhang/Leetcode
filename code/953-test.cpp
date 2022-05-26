#include"953.hpp"

int main()
{
    vector<string> words;
    words.push_back("hello");
    words.push_back("leetcode");
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    Solution solution;
    //输出true,在该语言的字母表中，'h' 位于 'l' 之前，所以单词序列是按字典序排列的。
    cout << solution.isAlienSorted(words, order) << endl;

    return 0;
}