#include"SCLinkedList.h"

int main(){
    SCLinkedList l;
    l.insert(12);
    l.insert(23);
    l.insert(67);
    l.insert(172);
    l.insert(56);
    l.show();
    cout<<l.len()<<endl;
    cout<<l.get_head()<<endl;
    l.remove(23);
    cout<<l.get_head()<<endl;
    l.show();
    return 0;
}