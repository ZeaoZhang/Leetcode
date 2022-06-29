#include<iostream>
#include<string>
#include<map>
#include<random>
using namespace std;

class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string tail = "";
        while(tail != "" && dic.count(tail) == 0)
        {
            for(int i = 0; i < 6; ++i)
            {
                int index = rand() % 62;
                tail += range[index];
            }
        }
        string shortUrl = head + tail;
        dic[shortUrl] = longUrl;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        for(auto it = dic.begin(); it != dic.end(); ++it)
        {
            if(it->first == shortUrl)
            {
                return it->second;
            }
        }
        return NULL;
    }
private:
    map<string, string> dic;
    string range = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string head = "http://tinyurl.com/";    
};

