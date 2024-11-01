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
void Take_Input(Node *&head, Node *&tail, int val)
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
void sort_it(Node *head, Node *tail)
{
    for (Node *i = head; i->next_address != NULL; i = i->next_address)
    {
        for (Node *j = i->next_address; j != NULL; j = j->next_address)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
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
        Take_Input(head, tail, val);
    }
    sort_it(head, tail);
    Print_Doubly_Linked_list(head);
    return 0;
}