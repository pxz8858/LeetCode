//
//  main.cpp
//  最小的k个数
//
//  Created by 潘孝正 on 2021/3/19.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        vector<int> result;
        size_t size = arr.size();
        for (size_t i=0; i<k && i<size; ++i) {
            result.push_back(arr[i]);
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    Solution solition;
    solition.getLeastNumbers(arr, 2);
    return 0;
}
