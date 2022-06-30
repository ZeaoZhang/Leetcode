#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isPrime(int n)
    {
        if(n <= 1)
        {
            return false;
        }
        int sqr = (int)sqrt(1.0 * n);
        for(int i = 2; i <= sqr; ++i)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    int countPrime(int n)
    {
        int count = 0;
        for(int i = 1; i <= n; ++i)
        {
            if(isPrime(i) == true)
            {
                ++count;
            }
        }
        return count;
    }
    int numPrimeArrangements(int n) {
        int num = countPrime(n);
        long result = 1;
        for(int i = 2;i <= num; ++i)
        {
            result = (i * result) % 1000000007;
        }
        for(int j = 2;j <= n - num; ++j)
        {
            result = (j * result) % 1000000007;
        }
        return (int)result;
    }
};

