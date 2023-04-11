//
// Created by 刘健 on 2023/4/11.
//

#ifndef LC_SEA23_SOLUTION12_H
#define LC_SEA23_SOLUTION12_H

#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

template <class T>
class Compare {
public:
    bool operator()(const T& a, const T& b) const {
        return a > b;
    }
};

class Solution {
public:
    string intToRoman(int num) {
        map<int, string, Compare<int>> map_{
            {1,"I"}, {4, "IV"}, {5, "V"}, {9, "IX"},
            {10,"X"}, {40, "XL"}, {50, "L"}, {90, "XC"},
            {100,"C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}};
        int val = num;
        string res;
        for (map<int, string, Compare<int>>::iterator it = map_.begin(); it != map_.end(); ++it) {
            while (val >= it->first) {
                res += it->second;
                val -= it->first;
            }
        }
        return res;
    }
};

#endif //LC_SEA23_SOLUTION12_H
