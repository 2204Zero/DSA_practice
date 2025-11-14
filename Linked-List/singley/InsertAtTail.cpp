#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void insertAtTail(Node* &tail, int val){
    Node*temp = new Node(val);

    tail -> next = temp;
    tail = temp;
    temp -> next = NULL;

}

void printLL(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
    cout << temp -> data << " ";
    temp = temp ->next;
    }
    
    
}


int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    printLL(head);
    return 0;
}