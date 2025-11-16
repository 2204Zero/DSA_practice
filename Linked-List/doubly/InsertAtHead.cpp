#include<iostream>
using namespace std;

// Creating a node
class Node{
    public :
    int data;
    Node* prev;
    Node* next;

   
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

};

// Inserting Node in the beginning of the linked list
void insertAtHead(Node* &head, Node* &tail, int value){
    
    Node* newnode = new Node(value);

     if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}


// Printing Linked List
Node* printLL(Node* &head){
     Node* temp = head;
     while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
     }
     
}


int main (){
    class Node* newnode = new Node(10);
    Node* head = newnode;
    Node* tail = newnode;

    insertAtHead(head, tail,20);
    insertAtHead(head, tail,30);

    printLL(head);
    return 0;
}