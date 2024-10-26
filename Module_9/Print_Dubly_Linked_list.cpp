#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next_address;
    Node *prevoius;
    Node(int value)
    {
        this->value = value;
        next_address = NULL;
        prevoius = NULL;
    }
};
void Print_Doubly_Linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
    cout << endl;
}
void Reverse_Print_Doubly_Linked_list(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prevoius;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);
    head->next_address = a;
    a->prevoius = head;
    a->next_address = b;
    b->prevoius = a;
    b->next_address = c;
    c->prevoius = b;
    c->next_address = tail;
    tail->prevoius = c;

    Print_Doubly_Linked_list(head);
    Reverse_Print_Doubly_Linked_list(tail);
    return 0;
}