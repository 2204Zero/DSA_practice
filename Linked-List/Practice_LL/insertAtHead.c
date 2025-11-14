#include<stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;

};


struct node* insertAtHead(struct node* ptr1, int data)
{
    struct node* newnode = (struct node*)malloc (sizeof(struct node));
    newnode -> next = NULL;
    newnode -> prev = NULL;
    struct node* ptr2 = newnode;
    newnode -> data = data;
    ptr2 -> next = ptr1;
    ptr1 -> prev = ptr2;
    ptr1 = newnode;
    return newnode;
}


void printLL (struct node* ptr1 ){
    struct node* temp = ptr1;

    // if ()

    while (temp != NULL){
        printf("%d\n", temp -> data);
        temp  = temp -> next;
        }
    }
    

int main (){
    struct node* node = (struct node*)malloc (sizeof(struct node));
    // node -> next = NULL;
    // node -> prev = NULL;
    struct node* ptr1 = node;

    ptr1 = insertAtHead(ptr1,10);
    ptr1 = insertAtHead(ptr1,20);
    ptr1 = insertAtHead(ptr1,30);
    printLL(ptr1);


    return 0;
}