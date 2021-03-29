//
//  main.cpp
//  斐波那契数列
//
//  Created by 潘孝正 on 2021/3/19.
//

#include <iostream>

using namespace std;

class Solution {
public:
    Solution() {
        result[0] = 0;
        result[1] = 1;
        for (int i=2; i<101; ++i) {
            result[i] = (result[i-1] + result[i-2]) % 1000000007;
        }
    }
    
    int fib(int n) {
        return result[n];
    }
    
private:
    int result[101];
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.fib(2) << endl;
    return 0;
}
