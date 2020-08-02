#include<iostream>

using namespace std;

struct Node
{
    Node *left;
    int data;
    Node *right;
};

class DCLinkedList
{
private:
    unsigned int count;
    Node *head;
public:
    DCLinkedList(){ this->head = nullptr; this->count = 0; }
    ~DCLinkedList();
    Node* get_head() const{ return this->head; }
    unsigned int len() const{ return this->count; }
    void insert(int n);
    void remove(int n);
    void show();
};

void DCLinkedList::insert(int n){
    Node *temp = new Node();
    temp->data = n;
    temp->left = temp->right = nullptr;

    if (this->head == nullptr)
    {
        this->head = temp;
    }
    else if(this->head->right == nullptr){
        this->head->right = this->head->left = temp;
        temp->left = temp->right = this->head;
    }
    else
    {
        Node *t = this->head;
        while (t->right != this->head)
        {
            t = t->right;
        }
        t->right = temp;
        temp->left = t;
        temp->right = this->head;
    }
    
}

void DCLinkedList::remove(int n){
    Node *temp = this->head;
    do
    {
        if (temp->data == n)
        {
            temp->left->right = temp->right;
            temp->right->left = temp->left;
            delete temp;
        }
        temp = temp->right;
        
    } while (temp != this->head);
}

void DCLinkedList::show(){
    Node *temp = this->head;
    while (temp->right != this->head)
    {
        cout<<temp->data<<" ";
        temp = temp->right;
    }
    cout<<temp->data<<endl;
}

DCLinkedList::~DCLinkedList(){
    Node *temp = this->head, *next;
    while (temp->right != this->head)
    {
        next = temp->right;
        delete temp;
        temp = next;
    }
    delete temp;
}