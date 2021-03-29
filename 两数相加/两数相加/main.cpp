//
//  main.cpp
//  两数相加
//
//  Created by 潘孝正 on 2021/3/23.
//

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = nullptr;
        ListNode* curr = nullptr;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry > 0) {
            int sum = sumNode(l1, l2) + carry;
            carry = sum / 10;
            ListNode *node = new ListNode(sum % 10);
            if (result == nullptr) {
                result = node;
                curr = node;
            } else {
                curr->next = node;
                curr = node;
            }
            
            if (l1 != nullptr) {
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                l2 = l2->next;
            }
        }
        return result;
    }

    int sumNode(ListNode* n1, ListNode* n2) {
        int sum = 0;
        if (n1 != nullptr) {
            sum += n1->val;
        }
        if (n2 != nullptr) {
            sum += n2->val;
        }
        return sum;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
