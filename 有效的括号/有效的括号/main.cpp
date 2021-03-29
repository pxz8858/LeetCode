//
//  main.cpp
//  有效的括号
//
//  Created by 潘孝正 on 2021/3/23.
//

#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        for (char c : s) {
            if (charStack.empty()) {
                charStack.push(c);
                continue;
            }
            char top = charStack.top();
            if ((top == '(' && c == ')')
                || (top == '{' && c == '}')
                || (top == '[' && c == ']')) {
                charStack.pop();
            } else {
                charStack.push(c);
            }
        }
        return charStack.empty();
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    std::cout << solution.isValid("([)]") << endl;
    return 0;
}
