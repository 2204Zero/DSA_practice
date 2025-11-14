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

void insertAtTail(Node* &tail, int val){
    Node*temp = new Node(val);
    
    tail -> next = temp;
    tail = temp;
    temp -> next = NULL;

}
void InsertInMiddle(int val, int position , Node* &head, Node* &tail){
    // inserting at front
     if ( position == 1){
        instertAtHead(head,val);
        return ;
    }

    // inserting at position 
    Node* temp = head;

    int count = 1;
    while(count < position-1){
        temp = temp -> next;
        count++;
    }

    // insterting at end
    if (temp -> next == NULL){
        insertAtTail(tail,val);
        return;
        // tail = tail -> next;     already done by insterAtTail function
    }

    Node* middle_node = new Node(val);
    middle_node -> next = temp -> next;
    temp -> next = middle_node;
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
    InsertInMiddle(50,4,head,tail);
    printLL(head);
    return 0;
}