#include"DCLinkedList.h"

int main(){
    DCLinkedList l;
    l.insert(90);
    l.insert(78);
    l.insert(98);
    l.insert(154);
    l.show();
    l.remove(154);
    l.show();
    return 0;
}