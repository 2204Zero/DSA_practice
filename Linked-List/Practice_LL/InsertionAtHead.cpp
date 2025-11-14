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


Node* insertAtHead(Node* &head, int value){
    Node* nodetoinsert = new Node(value);
    nodetoinsert -> next = head;
    head = nodetoinsert;
}




int main (){
    Node* newnode = new Node(10);
    Node* head = newnode;

    // printLL(head);

    insertAtHead(head,20);
    printLL(head);

    return 0;
}