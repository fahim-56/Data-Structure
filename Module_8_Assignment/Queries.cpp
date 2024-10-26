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
int size(Node *head)

{
    Node *temp = head;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next_address;
    }
    return sz;
}
void Insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    new_node->next_address = head;
    head = new_node;
    tail = new_node;
    return;
}
void Insert_at_Tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    else
    {
        Node *tail = head;
        while (tail->next_address != NULL)
        {
            tail = tail->next_address;
        }
        tail->next_address = new_node;
    }
    return;
}
void Delete_Node(Node *&head, int v)
{
    Node *temp = head;
    for (int i = 0; i < v - 1; i++)
    {
        temp = temp->next_address;
    }
    Node *dlt = temp->next_address;
    temp->next_address = temp->next_address->next_address;
    delete dlt;
}
void Delete_Head(Node *&head)
{
    Node *dlt = head;
    head = head->next_address;
    delete dlt;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int v;
        cin >> v;
        if (x == 0)
        {
            Insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            Insert_at_Tail(head, tail, v);
        }
        else if (x == 2)
        {
            if (v >= size(head))
            {
            }
            else if (v == 0)
                Delete_Head(head);
            else
            {
                Delete_Node(head, v);
            }
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next_address;
        }
        cout << endl;
    }

    return 0;
}