#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;


class Solution {
public:
    int cutOffTree(vector<vector<int>>& forest) {
        int m = forest.size();
        int n = forest[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (forest[i][j] > 1) {
                    positions.emplace(forest[i][j], make_pair(i, j));
                }
            }
        }
        int cx = 0;
        int cy = 0;
        int sum = 0;

        for (auto it = positions.begin(); it != positions.end(); ++it) {
            int step = bfs(forest, cx, cy, it->second.first, it->second.second);
            if (step == -1) {
                return -1;
            }
            sum += step;
            cx = it->second.first;
            cy = it->second.second;
        }
        return sum;
    }



    int bfs(vector<vector<int>>& forest, int x1, int y1, int x2, int y2) {
        if (x1 == x2 && y1 == y2) {
            return 0;
        }

        int m = forest.size();
        int n = forest[0].size();
        int step = 0;
        queue<pair<int, int>> q;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        q.emplace(x1, y1);
        visited[x1][y1] = true;
        while (!q.empty()) {
            step++;
            int s = q.size();
            for (int i = 0; i < s; ++i) {
                int cx = q.front().first;
                int cy = q.front().second;
                q.pop();
                for (int j = 0; j < 4; ++j) {
                    int nx = cx + dirs[j][0];
                    int ny = cy + dirs[j][1];
                    if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                        if (!visited[nx][ny] && forest[nx][ny] > 0) {
                            if (nx == x2 && ny == y2) {
                                return step;
                            }
                            q.emplace(nx, ny);
                            visited[nx][ny] = true;
                        }
                    }
                }
            }
        }
        return -1;
    }



private:
    map<int, pair<int, int>> positions;
    int dirs[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
};