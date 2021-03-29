//
//  main.cpp
//  移动零
//
//  Created by 潘孝正 on 2021/3/29.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        size_t index = 0;
        auto size = nums.size();
        for (size_t i=0; i<size; ++i) {
            if (nums[i] == 0) {
                continue;
            }
            if (index != i) {
                nums[index] = nums[i];
                nums[i] = 0;
            }
            ++index;
        }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
