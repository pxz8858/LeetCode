//
//  main.cpp
//  最长公共前缀
//
//  Created by 潘孝正 on 2021/3/25.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() <= 0) {
            return "";
        }
        string result = "";
        size_t minLength = INT32_MAX;
        for (string str : strs) {
            if (str.length() < minLength) {
                minLength = str.length();
            }
        }
        for (size_t i=0; i<minLength; ++i) {
            bool equal = true;
            char c = strs[0][i];
            for (string str : strs) {
                if (str[i] != c) {
                    equal = false;
                    break;
                }
            }
            if (equal) {
                result.push_back(c);
            } else {
                break;
            }
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
