#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
private:
    const int MAXSIZE = 5000;
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = words.size();
        int len = s.length();
        int c = words[0].size();
        bool visited[MAXSIZE];
        vector<int> result;
        for(int i = 0; i < len; ++i)
        {
            fill(visited, visited + n, false);
            bool flag = true;
            int index = i;
            while(flag)
            {
                flag = false;
                for(int j = 0; j < n; ++j)
                { 
                    if(!visited[j] && !s.compare(index, c, words[j]))
                    {
                        visited[j] = true;
                        flag = true;
                        index += c;
                    }
                }
            }
            int k = 0;
            while(k < n && visited[k] == true)
            {
                ++k;
            }
            if(k == n)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};

