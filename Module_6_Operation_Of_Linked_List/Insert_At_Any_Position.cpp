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
    int pos, val;
    cout << "Enter The position :" << endl;
    cin >> pos;
    cout << "Enter The Value :" << endl;
    cin >> val;
    Node *new_node = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next_address;
    }
    new_node->next_address = temp->next_address;
    temp->next_address = new_node;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
    return 0;
}