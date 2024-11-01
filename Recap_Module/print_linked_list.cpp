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
    Node *head = new Node(19);
    Node *a = new Node(29);
    Node *b = new Node(39);
    Node *c = new Node(49);
    Node *d = new Node(59);

    head->next_address = a;
    a->next_address = b;
    b->next_address = c;
    c->next_address = d;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next_address;
    }

    return 0;
}