#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class list{
    Node* head;
    Node* tail;

    public :
    list(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newnode = new Node(val);
        // Node newnode(val);   # another way of above statement, but it creates static object.
        if(head ==NULL){
            head = tail = newnode;
           return;
        }else{
            newnode->next = head;     // (*newnode).next = head
            head = newnode;
        }
    }
    void print(){
        Node* temp = head;
        while (temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "Null"<<endl;
    }
    
};

int main(){
    list l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
   

    l.print();
    return 0;
}