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
void Insert_at_any_positon(Node *head, int pos, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next_address;
    }
    new_node->next_address = temp->next_address;
    temp->next_address = new_node;
    new_node->prevoius = temp;
    new_node->next_address->prevoius = new_node;
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

    int pos, val;
    // cout << "Enter Insert Position and Value : " << endl;
    cin >> pos >> val;
    Insert_at_any_positon(head, pos, val);

    Print_Doubly_Linked_list(head);
    Reverse_Print_Doubly_Linked_list(tail);
    return 0;
}