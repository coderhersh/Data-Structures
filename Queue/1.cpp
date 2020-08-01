#include"queue.h"

int main(void){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.show();
    q.dequeue();
    q.dequeue();
    q.show();
    return 0;
}