//
//  main.cpp
//  爬楼梯
//
//  Created by 潘孝正 on 2021/3/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp = vector<int>(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for (int i=2; i<=n; ++i) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.climbStairs(4) << endl;
    return 0;
}
