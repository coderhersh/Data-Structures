#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class stack
{
private:
    Node *head, *tail;
    int count;
public:
    stack(){ this->head = this->tail = nullptr; this->count = 0; }
    ~stack();
    void push(int a);
    void generate_stack(int n);
    void pop(int a);
    void show();
    int size() const{ return this->count; }
    bool isEmpty(){ return (this->count == 0)? true: false; }
    Node *get_last(){
        Node *temp = this->head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        return temp;
    }
};

void stack::push(int a){
    Node *temp = new Node();
    temp->data = a;
    temp->next = nullptr;

    if (this->head == nullptr)
    {
        this->head = temp;
    }
    else
    {
        Node *find = this->head;
        while (find->next != nullptr)
        {
            find = find->next;
        }
        find->next = temp;
    }
    ++this->count;   
}

void stack::generate_stack(int n){
    Node *temp, *last = this->get_last();
    while (n)
    {
        temp = new Node;
        temp->data = ( rand() % 30 + 1);
        temp->next = nullptr;
        if (this->head == nullptr)
        {
            this->head = last = temp;
        }
        else
        {
            last->next = temp;
            last = temp;
        }
        
        --n;
        ++this->count;
    }
}

void stack::pop(int a){
    Node *last = this->head, *prev;
    while (last->next != nullptr)
    {
        prev = last;
        last = last->next;
    }
    
    if (last->data == a)
    {
        delete last;
        prev->next = nullptr;
        cout<<"Element with value "<< a << " poped."<<endl;
        --this->count;
    }
    else
    {
        cout<<"Last Element does not matches with "<<
        a<<" the input element."<<endl;
    }
    
}

void stack::show(){
    Node *temp = this->head;
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

stack::~stack(){
    Node *temp = this->head, *next;

    while (temp != nullptr)
    {
        next = temp->next;
        delete temp;
        temp = next;
    }       
}
