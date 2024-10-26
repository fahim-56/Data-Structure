#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next_address;
    Node *previous;
    Node(int value)
    {
        this->value = value;
        next_address = NULL;
        previous = NULL;
    }
};
int size(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next_address;
    }
    return cnt;
}

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
        temp = temp->previous;
    }
    cout << endl;
}
void Delete_Middle_Node(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next_address;
    }
    Node *delete_node = temp->next_address;
    temp->next_address = temp->next_address->next_address;
    temp->next_address->previous = temp;
    delete delete_node;
}
void Delete_head(Node *&head)
{
    Node *delete_head = head;
    head = head->next_address;
    head->previous = NULL;
    delete delete_head;
}
void Delete_tail(Node *&tail)
{
    Node *delete_tail = tail;
    tail = tail->previous;
    tail->next_address = NULL;
    delete delete_tail;
}
int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);

    head->next_address = a;
    a->previous = head;
    a->next_address = b;
    b->previous = a;
    b->next_address = c;
    c->previous = b;
    c->next_address = tail;
    tail->previous = c;

    int pos;
    cin >> pos;
    if (pos > size(head))
    {
        cout << "Invalid position" << endl;
        return 0;
    }
    else if (pos == 1)
        Delete_head(head);
    else if (pos == size(head))
        Delete_tail(tail);
    else
        Delete_Middle_Node(head, pos);

    Print_Doubly_Linked_list(head);
    Reverse_Print_Doubly_Linked_list(tail);

    return 0;
}