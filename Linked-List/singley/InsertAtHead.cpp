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

void instertAtHead(Node* &head, int val){
    Node* temp = new Node(val);
    temp -> next = head;
    head = temp;
}

void printLL(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
    cout << temp-> data << " ";
    temp = temp->next;
    }
    
    
}


int main(){
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;

    instertAtHead(head,20);
    instertAtHead(head,30);
    printLL(head);
    return 0;
}