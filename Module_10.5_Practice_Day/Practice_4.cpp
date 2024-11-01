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
void Print_it(Node *head)
{
    Node * temp=head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next_address;
    }
    cout << endl;
}
void Reverse_Print(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->previous;
    }
    cout << endl;
}
void Insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next_address = head;
    head->previous = new_node;
    head = new_node;
}
void Insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (tail == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->previous = tail;
    tail->next_address = new_node;
    tail = new_node;
}
void Insert_At_Any_Position(Node *&head, Node *&tail, int pos, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next_address;
    }
    new_node->next_address = temp->next_address;
    temp->next_address->previous = new_node;
    temp->next_address = new_node;
    temp->next_address->previous = temp;
}
int size(Node *head)
{
    int size = 0;
    while (head != NULL)
    {
        head = head->next_address;
        size++;
    }
    return size;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    int x, v;
    while (q--)
    {
        cin >> x, v;
        if (x == 0)
        {
            Insert_at_head(head, tail,v);
        }
        else if (x == (size(head) - 1))
        {
            Insert_at_tail(head, tail, v);
        }
        else if (x >= size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            Insert_At_Any_Position(head, tail, x, v);
        }
        Print_it(head);
        Reverse_Print(tail);
    }

    return 0;
}