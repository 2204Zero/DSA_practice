#include <stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};


struct node* createNode(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node) );
    newnode -> data =data;
    newnode -> left =NULL;
    newnode -> right =NULL;
    return newnode;
}

void print_tree(struct node* newnode){
    if(newnode != NULL){
    printf("%d\n",newnode->data);
    print_tree(newnode->left);
    print_tree(newnode->right);

    }
}


int main(){
   struct node* one = createNode(10);
   struct node* two = createNode(20);
   struct node* three = createNode(30);

   one -> left = two;
   one -> right = three;
   print_tree(one);




    return 0;
}