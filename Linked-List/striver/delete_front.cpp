#include<iostream>
#include<vector>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2l(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i =1; i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){}
        cout << head->data<<endl;
        head = head->next;

}

int main(){
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2l(arr);
    // cout << "printing ";
    cout<< head->data;
    print(head);


    return 0;
}