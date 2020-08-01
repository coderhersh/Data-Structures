#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class queue
{
private:
    Node *head, *tail;
    unsigned int count;
public:
    queue(){ this->head = this->tail = nullptr; this->count = 0; }
    Node* get_head() const{ return this->head; }
    Node* get_tail() const{ return this->tail; }
    void enqueue(int a);
    void dequeue();
    void show();
    int size() const{ return this->count; }
    bool isEmpty() const{ return (this->count == 0)? true: false; }
};

void queue::enqueue(int a){
    Node *temp = new Node();
    temp->data = a;
    temp->next = nullptr;
    
    if (this->tail == nullptr)
    {
        this->head = this->tail = temp;       
    }
    else
    {
        this->tail->next = temp;
        this->tail = temp;
    }
    cout<<a<<" enqueued."<<endl;
    ++this->count;
}

void queue::dequeue(){
    Node *temp = this->head;
    this->head = this->head->next;
    cout<<temp->data<<" popped."<<endl;
    delete temp;
}

void queue::show(){
    Node *temp = this->get_head();
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}