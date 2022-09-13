#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


class Solution {
public:
	int maximumSwap(int num) {
		if (num <= 9) return num;

		string s = to_string(num);
		string temp(s);

		sort(temp.begin(), temp.end(), [&](char a, char b) {return a > b; });
		

		int tar = -1;
		for (int i = 0; i < s.size(); i++)
		{
			if (temp[i] != s[i]) {
				tar = i;
				break;
			}
		}
		if (tar == -1) return num;
		for (int i = s.size() -1; i >=tar+1; i--)
		{
			if (s[i] == temp[tar]) {
				swap(s[i], s[tar]);
				break;
			}
		}
		return stoi(s);
	}

};
