#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next_Address;
    Node(int value)
    {
        this->value = value;
        next_Address = NULL;
    }
};
int main()
{
    Node *head = new Node(0);
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    head->next_Address = a;

    a->next_Address = b;
    b->next_Address = c;
    c->next_Address = d;
    d->next_Address = e;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp << endl;
        cout << temp->value << endl;
        temp = temp->next_Address;
    }

    return 0;
}