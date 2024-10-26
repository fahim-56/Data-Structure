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
void New_Node_Insert(Node *&head, int v)
{
    Node *new_node = new Node(v);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node *tail = head;
    while (tail->next_address != NULL)
    {
        tail = tail->next_address;
    }
    tail->next_address = new_node;
}

void Print_Linked_List(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
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

    Node *head = NULL;

    New_Node_Insert(head, 1000);
    Print_Linked_List(head);
    return 0;
}