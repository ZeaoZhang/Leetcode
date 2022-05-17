#include"944.hpp"

int main()
{

    vector<string> strs = { "cba", "daf", "ghi" };  
    //列 0（'a', 'b', 'c'）和列 2（'c', 'e', 'e'）都是按升序排列的，
    //而列 1（'b', 'c', 'a'）不是，所以要删除列 1 。
    Solution solution;
    cout << solution.minDeletionSize(strs) << endl;         //输出1

    return 0;
}