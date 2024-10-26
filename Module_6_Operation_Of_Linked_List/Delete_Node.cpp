#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next_address;
    Node(int value)
    {
        this->value = value;
        next_address = NULL;
    }
};

void Print_Linked_List(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
}
int main()
{
    Node *head = new Node(0);
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    head->next_address = a;
    a->next_address = b;
    b->next_address = c;
    c->next_address = d;
    d->next_address = e;

    cout << "Enter Position :" <<" ";
    int pos;
    cin >> pos;
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next_address;
    }
    Node *deleteNode = temp->next_address;
    temp->next_address = temp->next_address->next_address;
    delete deleteNode;
    Print_Linked_List(head);
    return 0;
}