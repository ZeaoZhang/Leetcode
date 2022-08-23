#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    int movesToChessboard(vector<vector<int>>& board) {
        if(!check(board))
        {
            return -1;
        }
        vector<int> a = board[0];
        vector<int> b;
        for(auto v : board)
        {
            b.push_back(v[0]);
        }
        int count = 0;
        count += get_count(a);
        count += get_count(b);
        return count;
    }

    bool check(vector<vector<int>>& board)
    {
        vector<int> a = board[0];
        vector<int> b;
        int i = 0;
        while(i < board.size() && board[i] == a)
        {
            ++i;
        }
        if(i == board.size())
        {
            return false;
        }
        b = board[i];
        while(i < board.size())
        {
            if(board[i] != a && board[i] != b)
            {
                return false;
            }
            ++i;
        }
        for(int i = 0;i < a.size(); ++i)
        {
            if(!(a[i] ^ b[i]))
            {
                return false;
            }
        }
        int count = 0;
        for(int i = 0;i < a.size(); ++i)
        {
            if(a[i] == 1)
            {
                ++count;
            }
            else if(a[i] == 0)
            {
                --count;
            }
        }
        if(abs(count) > 1)
        {
            return false;
        }
        return true;
    }

    int get_count(vector<int> &a)
    {
        int count = 0;
        int count_1 = 0, count_0 = 0;
        if(a.size() % 2 == 1)
        {
            for(int i = 0;i < a.size(); ++i)
            {
                if(a[i] == 0)
                {
                    ++count_0;
                }
                else
                {
                    ++count_1;
                }
            }
        }
        else
        {
            for(int i = 0;i < a.size(); i += 2)
            {
                if(a[i] == 0)
                {
                    ++count_0;
                }
                else
                {
                    ++count_1;
                }
            }
        }
        int first = 0;

        if(count_1 == count_0)
        {
            first = a[0];
        }
        else
        {
            first = count_1 > count_0 ? 1 : 0;
        }

        for(int i = 0;i < a.size(); ++i)
        {
            if(i < a.size() - 1 && a[i] != first)
            {
                int j = i + 1;
                while(j < a.size() - 2 && a[j] != first)
                {
                    j += 2;
                }
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                ++count;
            }
            first = first == 0 ? 1 : 0;
        }   
        return count;
    }
};
