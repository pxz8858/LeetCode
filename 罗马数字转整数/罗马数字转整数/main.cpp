//
//  main.cpp
//  罗马数字转整数
//
//  Created by 潘孝正 on 2021/3/25.
//

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    Solution() {
        romanValueMap["I"] = 1;
        romanValueMap["IV"] = 4;
        romanValueMap["IX"] = 9;
        romanValueMap["V"] = 5;
        romanValueMap["X"] = 10;
        romanValueMap["XL"] = 40;
        romanValueMap["XC"] = 90;
        romanValueMap["L"] = 50;
        romanValueMap["C"] = 100;
        romanValueMap["CD"] = 400;
        romanValueMap["CM"] = 900;
        romanValueMap["D"] = 500;
        romanValueMap["M"] = 1000;
    }
    
    int romanToInt(string s) {
        int result = 0;
        auto size = s.size();
        for (size_t i=0; i<size; ++i) {
            if (i + 1 >= size) {
                result += romanValueMap[string(1, s[i])];
                continue;
            }
            string subS = s.substr(i, 2);
            if (subS == "IV" || subS == "IX" || subS == "XL" || subS == "XC" || subS == "CD" || subS == "CM") {
                result += romanValueMap[subS];
                ++i;
            } else {
                result += romanValueMap[string(1, s[i])];
            }
        }
        return result;
    }
    
private:
    unordered_map<string, int> romanValueMap;
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.romanToInt("LVIII") << endl;
    return 0;
}
