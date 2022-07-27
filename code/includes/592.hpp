#include<iostream>
#include<vector>
using namespace std;

class Fraction {
    int numerator;
    int dominator;
    int sign;

    int getGCD(int a, int b) {
        return !b ? a : getGCD(b, a % b);
    }

public:
    Fraction(int num) {
        this->sign = 1;
        if (num < 0) {
            this->sign = -1;
            num = -num;
        }
        this->numerator = num;
        this->dominator = 1;
    }

    Fraction(int numerator, int dominator) {
        this->sign = 1;
        if ((numerator < 0 && dominator > 0) || (numerator > 0 && dominator < 0)) {
            this->sign = -1;
        }
        if (numerator < 0) numerator = -numerator;
        if (dominator < 0) dominator = -dominator;
        this->numerator = numerator;
        this->dominator = dominator;
    }

    Fraction(const string& serialized, int begin, int end) {
        if (end - begin <= 0) {
            this->numerator = 0;
            this->dominator = 1;
            return;
        }
        if (serialized[begin] == '-') {
            this->sign = -1;
            ++begin;
        }
        else if (serialized[begin] == '+') {
            this->sign = 1;
            ++begin;
        }

        int num = 0;
        while (begin < end && serialized[begin] != '/') {
            num *= 10;
            num += serialized[begin] - '0';
            ++begin;
        }

        this->numerator = num;
        num = 0;

        ++begin;
        if (begin >= end) this->dominator = 1;

        while (begin < end) {
            num *= 10;
            num += serialized[begin] - '0';
            ++begin;
        }
        this->dominator = num;
    }


    Fraction& standardize() {
        int gcd = getGCD(this->numerator, this->dominator);
        this->numerator /= gcd;
        this->dominator /= gcd;
        return *this;
    }

    string serialize() {
        return to_string(sign*numerator) + '/' + to_string(dominator);
    }

    Fraction& add(const Fraction& obj) {
        int gcd = getGCD(this->dominator, obj.dominator);        
        int factor_obj  = this->dominator / gcd;
        int factor_this = obj.dominator / gcd;

        this->numerator = this->sign * this->numerator * factor_this + obj.sign * obj.numerator * factor_obj;
        this->sign = 1;
        if (this->numerator < 0) {
            this->numerator = -this->numerator;
            this->sign = -1;
        }

        this->dominator *= factor_this;
        return *this;
    }

    Fraction& setSign(int sign) {
        if (sign > 0) this->sign = 1;
        else this->sign = -1;

        return *this;
    }
};

class Solution {
public:
    string fractionAddition(string expression) {
        Fraction f(0);
        int len = expression.size();
        int ptr = 0;
        int sign = 1;

        while (ptr < len) {
            int end = ptr;
            while (end < len && expression[end] != '+' && expression[end] != '-') {
                ++end;
            }
            f.add(Fraction(expression, ptr, end).setSign(sign));
            f.standardize();
            if (end < len) {
                if (expression[end] == '+') sign = 1;
                else sign = -1;
            }
            ptr = end + 1;
        }
        return f.standardize().serialize();
    }
};

