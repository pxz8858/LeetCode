//
//  main.cpp
//  删除有序数组中的重复项
//
//  Created by 潘孝正 on 2021/3/25.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto size = nums.size();
        if (size <= 0) {
            return 0;
        }
        size_t index = 0;
        for (size_t i=1; i<size; ++i) {
            if (nums[index] != nums[i]) {
                nums[++index] = nums[i];
            }
        }
        return index + 1;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    Solution solution;
    std::cout << solution.removeDuplicates(nums) << endl;
    return 0;
}
