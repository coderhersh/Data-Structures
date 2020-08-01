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

int r_count(Node *head, int c){
    int COUNT = c;
    if (head == NULL)
    {
        return COUNT;
    }
    else
    {
        ++COUNT;
        cout<<"ok\n";
        return r_count(head->next, COUNT);
    }
}

int main(){
    LinkedList l;
    l.generate(10);
    Node *first = l.get_head();
    cout<<r_count(first, 0)<<"\n";
    return 0;
}