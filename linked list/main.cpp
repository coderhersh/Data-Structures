#include"linkedlist.h"
void reverse(Node *head){
    Node *prev = NULL, *cur = head, *nxt = NULL;
    while(cur != NULL){
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    head = prev;
}
int main(){
    LinkedList l;
    l.generate(29);
    l.print();
    return 0;
}