//
//  main.cpp
//  回文数
//
//  Created by 潘孝正 on 2021/3/25.
//

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long num = 0;
        int temp = x;
        while (temp != 0) {
            num = num * 10 + temp % 10;
            temp /= 10;
        }
        return num == x;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.isPalindrome(12321) << endl;
    return 0;
}
