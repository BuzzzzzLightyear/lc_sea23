//
// Created by 刘健 on 2023/4/11.
//

#ifndef LC_SEA23_SOLUTION_H
#define LC_SEA23_SOLUTION_H
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vec(128, -1);
        int start{0}, res{0};
        for (int i = 0; i < s.size(); ++i) {
            int index = s[i];
            start = max(start, vec[index] + 1);
            res = max(res, i - start + 1);
            vec[index] = i;
        }
        return res;
    }
};
#endif //LC_SEA23_SOLUTION_H
