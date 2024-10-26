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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        Insert_at_tail(head, tail, val);
    }
    Print_Doubly_Linked_list(head);
    Reverse_Print_Doubly_Linked_list(tail);
    return 0;
}