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
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
}
void reverse_recersively(Node *&head, Node *cur)
{
    if (cur->next_address == NULL)
    {
        head = cur;
        return;
    }
    reverse_recersively(head, cur->next_address);
    cur->next_address->next_address = cur;
    cur->next_address = NULL;
    return;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next_address = a;
    a->next_address = b;
    b->next_address = c;
    c->next_address = d;
    reverse_recersively(head, head);
    print_linked_list(head);
    return 0;
}