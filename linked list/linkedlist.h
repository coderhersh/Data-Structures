//
// Created by harshdeep on 26/07/20.
//

#ifndef FIRSTPROJECT_LINKEDLIST_H
#define FIRSTPROJECT_LINKEDLIST_H
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
    LinkedList(){ this->length = 0; this->head = nullptr; }
    Node *get_head() const{ return head; }
    int len() const{ return length; }
    void insert(int d){
        Node *temp = new Node;
        temp->data = d;
        temp->next = head;
        head = temp;
        ++length;
    }
    void remove(int d){
        Node *temp = head, *prev = head;

        while(temp != nullptr){
            if (temp->data == d)
            {
                prev->next = temp->next;
                --length;
            }
            prev = temp;
            temp = temp->next;
        }
    }
    void print(){
        Node *temp = head;

        while(temp != nullptr){
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
    int iterative_count(Node *head){
        int c = 1;

        if (head == nullptr)
            return 0;

        while (head ->next != nullptr){
            ++c;
            head = head-> next;
        }
        return c;
    }
    int recursive_count(Node *head){
        if (head == nullptr)
            return  0;

        if (head->next == nullptr){
            return 1;
        }
        else{
            return 1 + recursive_count(head->next);
        }
    }
    bool iterative_find(Node *head, int data){
        while (head != nullptr){
            if (head->data == data)
                return true;
            head = head->next;
        }
        return false;
    }
    bool recursive_find(Node *head, int data){
        if (head == nullptr)
            return false;
        if (head->data == data)
            return true;
        else
            return recursive_find(head->next, data);
    }
    void iterative_Nth_Node(Node *temp, int n){
        while (n){
            temp = temp->next;
            --n;
        }
        cout<<temp->data<<endl;
    }
    void recursive_Nth_Node(Node *temp, int n){
        if (n==0)
            cout<<temp->data<<endl;
        else
            return recursive_Nth_Node(temp->next, n-1);
    }
    void iterative_middle(Node *temp){
        int pos = 0;
        if (length % 2 != 0){
            pos = length/2;
        } else{
            pos = (length/2)-1;
        }
        while (pos){
            temp = temp->next;
            --pos;
        }
        cout<<temp->data<<endl;
    }
};
#endif //FIRSTPROJECT_LINKEDLIST_H
