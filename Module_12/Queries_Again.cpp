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
void Insert_at_any_position(Node *&head, Node *&tail, int pos, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next_address;
    }
    new_node->next_address = temp->next_address;
    temp->next_address->previous = new_node;
    temp->next_address = new_node;
    new_node->previous = temp;
}
void Print_Doubly_Linked_list(Node *head)
{
    cout << "L -> ";
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
    cout << "R -> ";
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
    int n;
    cin >> n;
    while (n--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (pos == size(head))
            Insert_at_tail(head, tail, val);
        else if (pos == 0)
            Insert_at_head(head, tail, val);
        else
            Insert_at_any_position(head, tail, pos, val);

        Print_Doubly_Linked_list(head);
        Reverse_Print_Doubly_Linked_list(tail);
    }
    return 0;
}