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
Node* insertAtHead(Node* &head, int value){
    Node* temp = head;
    Node* newnode = new Node(value);
    temp = newnode;
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    return newnode;
}

// Inserting a node at the ending of the linked list
Node* insertAtTail(Node* &tail, Node* &head, int value){
    Node* temp = tail;
    Node* newnode = new Node(value);
    
    if(tail == head){
        head -> next = newnode;
        temp = temp -> next;
        temp -> prev = head;
    }
    else {
        tail -> next = newnode;
        temp = temp -> next;
        temp -> prev = tail; 
        tail = tail -> next;
    }

    return newnode;
}

// Inserting a node at a given position in a linked list
Node* insertAtPosition(Node* &head, Node* &tail, int value, int position){
    Node* temp1 = head;
    Node* temp2 = head;
    Node* newnode = new Node(value);

    if (position == 1){
        return insertAtHead (head, value);
    }

    int count = 1;
    while (count < position){
        temp1 = temp1 -> next;
        temp2 = temp1 -> next;
        count ++;
    }
    newnode -> prev = temp1;
    newnode -> next = temp2;

    if (temp2 -> next == NULL){
        return insertAtTail(tail,head,value);
    }
    return newnode;
    
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

    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtTail(tail,head,50);
    insertAtPosition(head,tail,76,4);
    printLL(head);
    
    // cout << "\n";
    // cout << head -> data << endl;
    // cout << tail -> data ;
    return 0;
}