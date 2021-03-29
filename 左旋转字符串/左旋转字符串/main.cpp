//
//  main.cpp
//  左旋转字符串
//
//  Created by 潘孝正 on 2021/3/19.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string left = s.substr(0, n);
        string right = s.substr(n, s.size());
        return right + left;
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.reverseLeftWords("lrloseumgh", 6) << endl;;
    return 0;
}
