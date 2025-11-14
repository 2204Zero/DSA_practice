#include <iostream>
using namespace std;


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


// below is the function to print tree // also the pre order traversal in tree
void print_tree(struct node* newnode){  
    if(newnode != NULL){
        cout << newnode->data << endl;
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