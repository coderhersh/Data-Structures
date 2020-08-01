#include<iostream>

using namespace std;

struct Node{
    Node *left;
    int data;
    Node *right;
};

class DoubleLinkedList{
Node *head;
unsigned int count;
public:
    DoubleLinkedList(){ this->head = nullptr; this->count = 0; }
    void insert(int n);
    void remove(int n);
    void show();
    bool isempty() const { return (this->count == 0)? true: false; }
    unsigned int len() const { return this->count; }
};

void DoubleLinkedList::insert(int n){
    Node *temp = new Node;
    temp->data = n;
    temp->left = temp->right = nullptr;

    if (this->head == nullptr)
    {
        this->head = temp;
    }
    else
    {
        Node *t = this->head;
        while (t->right != nullptr)
        {
            t = t->right;
        }
        temp->left = t;
        t->right = temp;
    }
    ++this->count;
}

void DoubleLinkedList::remove(int n){
    Node *temp = this->head;
    while (temp != nullptr)
    {
        if(temp->data == n)
        {
            temp->right->left = temp->left;
            temp->left->right = temp->right;
            delete temp;
            --this->count;
            cout<<"Value "<<n<<" deleted."<<endl;
            return;
        }
        temp = temp->right;
    }
}

void DoubleLinkedList::show(){
    Node *temp = this->head;
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->right;
    }   
    cout<<endl;
}