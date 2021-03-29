//
//  main.cpp
//  最长回文子串
//
//  Created by 潘孝正 on 2021/3/25.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string palindrome = "";
        auto size = s.size();
        for (int i=0; i<size; ++i) {
            int left = i, right = i;
            for (int j=i+1; j<size; ++j) {
                if (s[left] != s[j]) {
                    break;
                }
                right = j;
            }
            i = right;
            while (left >= 0 && right < size) {
                if (s[left] != s[right]) {
                    break;
                }
                --left;
                ++right;
            }
            ++left;
            --right;
            if (right - left + 1 > palindrome.size()) {
                palindrome = s.substr(left, right - left + 1);
            }
        }
        return palindrome;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.longestPalindrome("bb") << endl;
    return 0;
}
