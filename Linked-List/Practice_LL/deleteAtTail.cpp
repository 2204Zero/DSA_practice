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

void insertAtPosition (Node* &head, Node* &tail,int position, int value){
    Node* nodetoinsert = new Node(value);
    Node* temp = head;
    int count = 1;

     if(position == 1){
        insertAtHead(head,value);
        return ;
     }
     

     while (count < position - 1){
        temp = temp -> next;
        count++;
     }

    nodetoinsert -> next = temp -> next ;
    temp -> next = nodetoinsert;

     if (nodetoinsert -> next ==NULL){
         insertAtTail(tail,value);
         return ;
     }

}

void deleteAtHead(Node* &head){
    Node* temp = head;
    if(head == NULL){
        cout << "Linked list is empty\n";
        return;
    }else{
        head = head -> next;
        delete temp;
    }
}

void deleteAtTail(Node* &tail, Node* &head){
       Node* temp = head;
    if(head == NULL){
        cout << "Linked list is empty\n";
        return;
    }else{
        while (temp -> next != tail){
            temp = temp -> next;
        }
        Node* nodeToDelete = tail; // last node
        tail = temp;               // new tail
        tail->next = NULL;         // break the link
        delete nodeToDelete;       // delete old tail
    }

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
    

    insertAtPosition(head,tail,4,90);
    printLL(head);
    cout << endl;

    // deleteAtHead(head);
    // printLL(head);
    
    //  cout << endl;
    //  deleteAtHead(head);
    //  printLL(head);
     deleteAtTail(tail,head);
     cout << endl;
    cout << tail ->data;
    cout << head ->data;
    return 0;

}