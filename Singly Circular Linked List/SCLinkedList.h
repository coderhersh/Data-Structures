#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *right;
};

class SCLinkedList
{
private:
    unsigned int count;
    Node *head;
public:
    SCLinkedList(){ this->head = nullptr; this->count = 0; }
    Node* get_head() const{ return this->head; }
    unsigned int len() const{ return this->count; }
    void insert(int n);
    void remove(int n);
    void show();
};

void SCLinkedList::insert(int n){
    Node *temp = new Node;
    temp->data = n;
    temp->right = nullptr;

    if (this->head == nullptr)
    {
        this->head = temp;
    }
    else if(this->head->right == nullptr){
        this->head->right = temp;
        temp->right = this->head;
    }
    else
    {
        Node *t = this->head;
        while (t->right != this->head)
        {
            t = t->right;
        }
        t->right = temp;
        temp->right = this->head;
    }
    ++this->count;
}

void SCLinkedList::remove(int n){
    Node *temp = this->head, *prev;
    do
    {
        if (temp->data == n)
        {
            prev->right = temp->right;
            --this->count;
            delete temp;
            cout<<n<<" removed."<<endl;
            return;
        }
        prev = temp;
        temp = temp->right;       
    }while(temp != this->head);
}

void SCLinkedList::show(){
    Node *temp = this->head;
    while (temp->right != this->head)
    {
        cout<<temp->data<<" ";
        temp = temp->right;        
    }
    cout<<temp->data;
    cout<<endl;
}