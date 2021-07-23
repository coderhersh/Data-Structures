#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

ListNode* head = nullptr;

void reverseList(ListNode *node) {
    if(node->next == nullptr) {
        head = node;
        return;
    }
    reverseList(node->next);
    ListNode* prev = node->next;
    prev->next = node;
    node->next = nullptr;
}