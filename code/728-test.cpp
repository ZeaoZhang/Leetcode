#include"./includes/728.hpp"


int main()
{
    vector<vector<int>> board = {{0, 1, 1, 0},
                                 {0, 1, 1, 0},
                                 {1, 0, 0, 1},
                                 {1, 0, 0, 1}};
    Solution obj;
    if(obj.movesToChessboard(board) == 2)
    {
        return 1;
    }
    return 0;
}
