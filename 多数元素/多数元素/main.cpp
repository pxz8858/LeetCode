//
//  main.cpp
//  多数元素
//
//  Created by 潘孝正 on 2021/3/22.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int currNum = 0, currCount = 0;
        size_t size = nums.size();
        for (size_t i=0; i<size; ++i) {
            if (currCount <= 0) {
                currNum = nums[i];
                ++currCount;
            } else if (currNum == nums[i]) {
                ++currCount;
            } else {
                --currCount;
            }
        }
        return currNum;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(2);
    //nums.push_back(1);
    
    Solution solution;
    std::cout << solution.majorityElement(nums) << endl;
    return 0;
}
