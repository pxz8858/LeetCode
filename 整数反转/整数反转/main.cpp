//
//  main.cpp
//  整数反转
//
//  Created by 潘孝正 on 2021/3/24.
//

#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while (x != 0) {
            int temp = x % 10;
            if (result > INT32_MAX / 10
                || (result == INT32_MAX / 10 && temp > 7)
                || result < INT32_MIN / 10
                || (result == INT32_MIN / 10 && temp < -8)) {
                return 0;
            }
            result = result * 10 + temp;
            x /= 10;
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.reverse(-2147483412) << endl;
    return 0;
}
