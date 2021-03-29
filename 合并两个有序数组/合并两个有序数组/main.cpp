//
//  main.cpp
//  合并两个有序数组
//
//  Created by 潘孝正 on 2021/3/22.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        --n;
        --m;
        int index = m + n + 1;
        while (m >= 0 || n >= 0) {
            if (m >= 0 && n >= 0) {
                if (nums1[m] > nums2[n]) {
                    nums1[index--] = nums1[m--];
                } else {
                    nums1[index--] = nums2[n--];
                }
            } else if (m >= 0) {
                nums1[index--] = nums1[m--];
            } else {
                nums1[index--] = nums2[n--];
            }
        }
    }
};

int main(int argc, const char * argv[]) {
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    
    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);
    
    Solution solution;
    solution.merge(nums1, nums1.size() - nums2.size(), nums2, nums2.size());
    //std::cout << nums1 << endl;
    return 0;
}
