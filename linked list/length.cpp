#include"linkedlist.h"

using namespace std;

int count(Node *head){
    int c = 0;
    while(head != NULL){
        ++c;
        head = head->next;
    }
    return c;
}

int r_count(Node *head){
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + r_count(head->next);
    }
}

int main(){
    LinkedList l;
    l.generate(10);
    cout<<r_count(l.get_head())<<"\n";
    return 0;
}
