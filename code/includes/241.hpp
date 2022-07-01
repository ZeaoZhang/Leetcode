#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        if(records.count(expression) != 0)
        {
            return records[expression];
        }
        vector<int> result;
        int len = expression.size();
        for(int i = 0; i < len; ++i)
        {
            char s = expression[i];
            if(s == '+' || s == '-' || s == '*')
            {
                vector<int> left = diffWaysToCompute(expression.substr(0, i));
                vector<int> right = diffWaysToCompute(expression.substr(i + 1, len - i - 1));
                for(auto l : left)
                {
                    for(auto r : right)
                    {
                        if(s == '+')
                        {
                            result.push_back(l + r);
                        }
                        else if(s == '-')
                        {
                            result.push_back(l - r);
                        }
                        else
                        {
                            result.push_back(l * r);
                        }
                    }
                }
            }
        }
        if(result.empty())
        {
            int ans = 0;
            for(char c : expression)
            {
                ans = ans * 10 + int(c - '0');
            }
            result.push_back(ans);
        }
        records[expression] = result;
        return result;
    }

private:
    map<string, vector<int>> records;
};

