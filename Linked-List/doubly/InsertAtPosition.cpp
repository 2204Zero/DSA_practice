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

// Inserting a node at the ending of the linked list
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

// Inserting a node at a given position in a linked list
void insertAtPosition(Node* &head, Node* &tail, int value, int position){
    
    if(position == 1){
        insertAtHead(head, tail, value);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position - 1 && temp != NULL){
        temp = temp->next;
        count++;
    }

    if(temp == NULL){
        cout << "Position out of bounds\n";
        return;
    }

    // Insert at end
    if(temp->next == NULL){
        insertAtTail(head, tail, value);
        return;
    }

    // Insert in middle
    Node* newnode = new Node(value);
    newnode->next = temp->next;
    newnode->prev = temp;

    temp->next->prev = newnode;
    temp->next = newnode;
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

    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtTail(tail,head,50);
    insertAtPosition(head,tail,76,3);
    printLL(head);
    
    // cout << "\n";
    // cout << head -> data << endl;
    // cout << tail -> data ;
    return 0;
}