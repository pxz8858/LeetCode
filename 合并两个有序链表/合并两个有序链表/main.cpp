//
//  main.cpp
//  合并两个有序链表
//
//  Created by 潘孝正 on 2021/3/29.
//

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        while (l1 != nullptr || l2 != nullptr) {
            ListNode* node = nullptr;
            if (l1 != nullptr && l2 != nullptr) {
                if (l1->val < l2->val) {
                    node = l1;
                    l1 = l1->next;
                } else {
                    node = l2;
                    l2 = l2->next;
                }
            } else if (l1 != nullptr) {
                node = l1;
                l1 = l1->next;
            } else {
                node = l2;
                l2 = l2->next;
            }
            
            if (tail == nullptr) {
                head = node;
                tail = node;
            } else {
                tail->next = node;
                tail = tail->next;
            }
        }
        return head;
    }
};

int main(int argc, const char * argv[]) {
    ListNode* node13 = new ListNode(4, nullptr);
    ListNode* node12 = new ListNode(2, node13);
    ListNode* node11 = new ListNode(1, node12);
    
    ListNode* node23 = new ListNode(4, nullptr);
    ListNode* node22 = new ListNode(3, node23);
    ListNode* node21 = new ListNode(1, node22);
    
    Solution solution;
    solution.mergeTwoLists(node11, node21);
    std::cout << "Hello, World!\n";
    return 0;
}
