//
//  main.cpp
//  最大子序和
//
//  Created by 潘孝正 on 2021/3/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int min = INT_MIN, sum = 0;
        auto size = nums.size();
        for (size_t i=0; i<size; ++i) {
            sum += nums[i];
            if (sum > min) {
                min = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        return min;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution solution;
    std::cout << solution.maxSubArray(nums) << endl;
    return 0;
}
