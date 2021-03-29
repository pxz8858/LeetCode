//
//  main.cpp
//  两数之和
//
//  Created by 潘孝正 on 2021/3/23.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> numMap;
        size_t size = nums.size();
        for (int i=0; i<size; ++i) {
            auto iterator = numMap.find(target - nums[i]);
            if (iterator != numMap.end()) {
                result.push_back(iterator->second);
                result.push_back(i);
                break;
            }
            numMap[nums[i]] = i;
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    Solution solution;
    solution.twoSum(nums, 6);
    std::cout << "Hello, World!\n";
    return 0;
}
