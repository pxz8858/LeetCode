//
//  main.cpp
//  买卖股票的最佳时机
//
//  Created by 潘孝正 on 2021/3/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0, min = INT_MAX, max = INT_MAX;
        auto size = prices.size();
        for (size_t i=0; i<size; ++i) {
            if (prices[i] < min) {
                min = prices[i];
                max = prices[i];
            } else if (prices[i] > max) {
                max = prices[i];
                if (max - min > result) {
                    result = max - min;
                }
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
