#include"DoubleLinkedList.h"

int main(){
    DoubleLinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.show();
    l.remove(4);
    l.show();
    cout<<l.len();
    return 0;
}