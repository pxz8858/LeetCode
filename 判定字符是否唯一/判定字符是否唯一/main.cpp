//
//  main.cpp
//  判定字符是否唯一
//
//  Created by 潘孝正 on 2021/3/19.
//

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isUnique(string astr) {
        unordered_set<char> set;
        for (char c : astr) {
            if (set.count(c)) {
                return false;
            }
            set.insert(c);
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    solution.isUnique("leetcode");
    return 0;
}
