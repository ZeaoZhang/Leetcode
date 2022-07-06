#include<cctype>
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution
{
public:
    int evaluate(string expression)
    {
        unordered_map<string, int> mp;
        int index = 0;
        return dfs(expression, index, mp);
    }
    int dfs(string &expression, int &index, unordered_map<string, int> mp)
    {
        int a, b;
        index++;
        int ans = 0;
        if (expression[index] == 'a')
        {
            index += 4;
            a = 0;
            b = 0;
            if (isdigit(expression[index]) || expression[index] == '-')
            {
                int j = index;
                index++;
                while (isdigit(expression[index]))
                    index++;
                a = atoi(expression.substr(j, index - j).c_str());
                index++;
            }
            else if (isalpha(expression[index]))
            {
                int j = index;
                index++;
                while (isalpha(expression[index]) || isdigit(expression[index]))
                    index++;
                a = mp[expression.substr(j, index - j)];
                index++;
            }
            else if (expression[index] == '(')
            {
                a = dfs(expression, index, mp);
                index++;
            }
            if (isdigit(expression[index]) || expression[index] == '-')
            {
                int j = index;
                index++;
                while (isdigit(expression[index]))
                    index++;
                b = atoi(expression.substr(j, index - j).c_str());
                index++;
            }
            else if (isalpha(expression[index]))
            {
                int j = index;
                index++;
                while (isalpha(expression[index]) || isdigit(expression[index]))
                    index++;

                b = mp[expression.substr(j, index - j)];
                index++;
            }
            else if (expression[index] == '(')
            {
                b = dfs(expression, index, mp);
                index++;
            }
            ans = a + b;
        }
        else if (expression[index] == 'm')
        {
            index += 5;
            a = 0;
            b = 0;
            if (isdigit(expression[index]) || expression[index] == '-')
            {
                int j = index;
                index++;
                while (isdigit(expression[index]))
                    index++;
                a = atoi(expression.substr(j, index - j).c_str());
                index++;
            }
            else if (isalpha(expression[index]))
            {
                int j = index;
                index++;
                while (isalpha(expression[index]) || isdigit(expression[index]))
                    index++;
                a = mp[expression.substr(j, index - j)];
                index++;
            }
            else if (expression[index] == '(')
            {
                a = dfs(expression, index, mp);
                index++;
            }
            if (isdigit(expression[index]) || expression[index] == '-')
            {
                int j = index;
                index++;
                while (isdigit(expression[index]))
                    index++;
                b = atoi(expression.substr(j, index - j).c_str());
                index++;
            }
            else if (isalpha(expression[index]))
            {
                int j = index;
                index++;
                while (isalpha(expression[index]) || isdigit(expression[index]))
                    index++;
                b = mp[expression.substr(j, index - j)];
                index++;
            }
            else if (expression[index] == '(')
            {
                b = dfs(expression, index, mp);
                index++;
            }
            ans = a * b;
        }
        else if (expression[index] == 'l')
        {
            index += 4;
            string tmp;
            while (isalpha(expression[index]))
            {
                int j = index;
                index++;
                while (isalpha(expression[index]) || isdigit(expression[index]))
                    index++;
                tmp = expression.substr(j, index - j);
                if (expression[index] == ')')
                    break;
                index++;
                if (isdigit(expression[index]) || expression[index] == '-')
                {
                    j = index;
                    index++;
                    while (isdigit(expression[index]))
                        index++;
                    mp[tmp] = atoi(expression.substr(j, index - j).c_str());
                    index++;
                }
                else if (isalpha(expression[index]))
                {
                    int j = index;
                    index++;
                    while (isalpha(expression[index]) || isdigit(expression[index]))
                        index++;
                    mp[tmp] = mp[expression.substr(j, index - j)];
                    index++;
                }
                else if (expression[index] == '(')
                {
                    mp[tmp] = dfs(expression, index, mp);
                    index++;
                }
            }
            if (expression[index] == ')')
            {
                ans = mp[tmp];
                index++;
            }
            else if (expression[index] == '(')
            {
                ans = dfs(expression, index, mp);
                index++;
            }
            else if (isdigit(expression[index]) || expression[index] == '-')
            {
                int j = index;
                index++;
                while (isdigit(expression[index]))
                    index++;
                ans = atoi(expression.substr(j, index - j).c_str());
                index++;
            }
        }
        return ans;
    }
};

