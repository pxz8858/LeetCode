//
//  main.cpp
//  无重复字符的最长子串
//
//  Created by 潘孝正 on 2021/3/23.
//

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        int start = 0;
        unordered_map<int, int> charMap;
        auto size = s.size();
        for (int i=0; i<size; ++i) {
            auto it = charMap.find(s[i]);
            if (it != charMap.end()) {
                if (i - start > maxLength) {
                    maxLength = i - start;
                }
                int end = it->second + 1;
                for (int j=start; j<end; ++j) {
                    charMap.erase(s[j]);
                }
                charMap[s[i]] = i;
                start = end;
            } else {
                if (i - start + 1 > maxLength) {
                    maxLength = i - start + 1;
                }
                charMap[s[i]] = i;
            }
        }
        return maxLength;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.lengthOfLongestSubstring("pwwkew") << endl;
    return 0;
}
