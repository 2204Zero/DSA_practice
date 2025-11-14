#include<iostream>
using namespace std;

class Node {
    public :
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void printLL(Node* &head){
    Node* temp = head;
    while (temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}


void insertAtHead(Node* &head, int value){
    Node* nodetoinsert = new Node(value);
    nodetoinsert -> next = head;
    head = nodetoinsert;
}


void insertAtTail(Node* &tail, int value){
    Node* nodetoinsert = new Node(value);
   
    tail -> next = nodetoinsert;
    tail = nodetoinsert ;
}


int main (){
    Node* newnode = new Node(10);
    Node* head = newnode;
    Node* tail = newnode;

    // printLL(head);

    insertAtHead(head,20);
    // printLL(head);

    insertAtTail(tail,30);
    insertAtTail(tail,60);
    insertAtTail(tail,70);
    printLL(head);
    // cout << endl;
    // cout << tail ->data;
    // cout << head ->data;
    return 0;

}