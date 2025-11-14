#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node (int data){
        this -> data  = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

Node* insterLL(Node* &head, int data){
    Node* newnode = new Node(20);
    newnode -> data = data;
    newnode -> prev = insterLL(head,data);
    newnode = head;
}
Node* printLL (Node* &head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> next;

    }
}






int main (){
    class Node* newnode;
    Node* head = newnode;

    insterLL(head,20);
    printLL (head);


    return 0;
}