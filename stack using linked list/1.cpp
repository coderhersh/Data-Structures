#include"stack.h"

int main(void){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.show();
    s.pop(56);
    s.pop(5);
    s.show();
    return 0;
}