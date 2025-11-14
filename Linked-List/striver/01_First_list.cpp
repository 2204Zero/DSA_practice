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
};

int main(){
    list l;

    return 0;
}