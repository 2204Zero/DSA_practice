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

// Inserting a node at the beginning of the linked list
// Node* insertAtHeadLL(Node* &head, int value){
//     Node* temp = head;
//     Node* newnode = new Node(value);
//     temp = newnode;
//     temp -> next = head;
//     head -> prev = temp;
//     head = temp;
//     return newnode;
// }

void insertAtTail(Node* &head, Node* &tail, int value){
    Node* newnode = new Node(value);

    if(tail == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}



//  Printing Linked List
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

    // insertAtHeadLL(head,20);
    // insertAtHeadLL(head,30);
    insertAtTail(tail,head,50);
    printLL(head);
    
    cout << "\n";
    cout << head -> data << endl;
    cout << tail -> data ;
    return 0;
}