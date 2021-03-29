//
//  main.cpp
//  删除链表的倒数第 N 个结点
//
//  Created by 潘孝正 on 2021/3/25.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* kNode = head;
        int index = 1;
        int count = 0;
        while (curr != nullptr) {
            curr = curr->next;
            ++count;
            if (count - index > n) {
                kNode = kNode->next;
                ++index;
            }
        }
        if (count == n) {
            return head->next;
        }
        if (kNode->next != nullptr) {
            kNode->next = kNode->next->next;
        }
        return head;
    }
};

int main(int argc, const char * argv[]) {
    ListNode *node4 = new ListNode(4, nullptr);
    ListNode *node3 = new ListNode(3, node4);
    ListNode *node2 = new ListNode(2, nullptr);
    ListNode *node1 = new ListNode(1, node2);
    
    Solution solution;
    std::cout << solution.removeNthFromEnd(node1, 1) << endl;
    return 0;
}
