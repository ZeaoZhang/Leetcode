#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int key = -1;
        int area = 0;
        unordered_map<int, int> mp;
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < col; ++j)
            {
                if(grid[i][j] == 1)
                {
                    area = 0;
                    dfs(grid, i, j, area, key, visited);
                    mp[key] = area;
                    --key;
                }
            }
        }
        int max_area = 0;
        vector<int> temp;
        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < col; ++j)
            {
                if(grid[i][j] == 0)
                {
                    area = 1;
                    temp.clear();
                    for(auto dic : dics)
                    {
                        int _i = i + dic[0];
                        int _j = j + dic[1];
                        if(_i >= 0 && _i < row && _j >= 0 && _j < col)
                        {   
                            if(find(temp.begin(), temp.end(), grid[_i][_j]) == temp.end())
                            {
                                temp.push_back(grid[_i][_j]);
                                area += mp[grid[_i][_j]];
                            }
                        }
                    }
                    if(area > max_area)
                    {
                        max_area = area;
                    }
                }
            }
        }
        return max_area != 0 ? max_area : row * col;
    }

private:
    vector<vector<int>> dics = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};


    void dfs(vector<vector<int>>& grid, int i, int j, int& area, int key, vector<vector<bool>>& visited)
    {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != 1 || visited[i][j] == true)
        {
            return;
        }
        visited[i][j] = true;
        grid[i][j] = key;
        ++area;
        for(auto dic : dics)
        {
            dfs(grid, i + dic[0], j + dic[1], area, key, visited);
        }
    }
};
