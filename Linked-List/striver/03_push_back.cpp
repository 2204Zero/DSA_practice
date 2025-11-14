#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class list{
    Node* head;
    Node* tail;

    public :
    list(){
        head = tail = NULL;
    }

    void push_back(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
            return ;
        }else{
            tail->next=newnode;
            tail = newnode;
        }
    }

    void print(){
        Node* temp = head;
        while (temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "Null"<<endl;
    }
};

int main(){
    list l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    l.print();
    return 0;
}