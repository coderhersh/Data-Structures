#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

struct Node{
    int data;
    Node *next;
};

class LinkedList{
    Node *head;
    int length;
public:
    LinkedList(){ length = 0; head = NULL; }
    Node *get_head(){ return head; }
    int len(){ return length; }
    void insert(int d){
        Node *temp = new Node;
        temp->data = d;
        temp->next = head;
        head = temp;
        ++length;
    }
    void Delete(int d){
        Node *temp = head, *prev = head;

        while(temp != NULL){
            if (temp->data == d)    
            {
                prev->next = temp->next;
                --length;
            }
            prev = temp;
            temp = temp->next;
        }
        delete temp, prev;
    }
    void print(){
        Node *temp = head;

        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
        delete temp;
    }
    void generate(int l){
        while(l){
            Node *temp = new Node;
            temp->data = ( rand() % 100 + 1 );
            temp->next = head;
            head = temp;
            ++length;
            --l;
        }
    }
};