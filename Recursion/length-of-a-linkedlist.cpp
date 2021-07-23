#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

int length(ListNode* node) {
    if (node == nullptr) {
        return 0;
    }
    if(node->next == nullptr) {
        return 1;
    }
    return 1 + length(node->next);
}
