#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memeory is free for data\n";
    }
};

void instertAtHead(Node *&head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int val)
{
    Node *temp = new Node(val);

    tail->next = temp;
    tail = temp;
    temp->next = NULL;
}
void InsertInMiddle(int val, int position, Node *&head, Node *&tail)
{
    // inserting at front
    if (position == 1)
    {
        instertAtHead(head, val);
        return;
    }

    // inserting at position
    Node *temp = head;

    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // insterting at end
    if (temp->next == NULL)
    {
        insertAtTail(tail, val);
        return;
        // tail = tail -> next;     already done by insterAtTail function
    }

    Node *middle_node = new Node(val);
    middle_node->next = temp->next;
    temp->next = middle_node;
}

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deletenode(int position, Node *&head)
{

    if (position == 1)
    {
        Node *temp = head;

        head = head->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;               // I forgot this line and it got stuck into infinite loop 
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    InsertInMiddle(50, 4, head, tail);
    printLL(head);

    deletenode(1,head);
    printLL(head);
    return 0;
}